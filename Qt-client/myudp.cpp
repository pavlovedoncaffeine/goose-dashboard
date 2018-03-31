#include "myudp.h"

MyUDP::MyUDP (QObject *parent) : QObject(parent)
{
    //create socket
    udpsocket = new QUdpSocket(this);
    udpaddress.setAddress("224.1.1.1");

    //bind socket to an address and port using bind()
    udpsocket->bind(udpaddress, 5007);

    connect (udpsocket, SIGNAL(readyRead()), this, SLOT(readyRead()));
}

void MyUDP::readyRead()
{
    QByteArray buffer;
    buffer.resize(udpsocket->pendingDatagramSize());
    qDebug() << buffer.size();
    qDebug() << udpsocket->hasPendingDatagrams();
    QHostAddress sender;
    quint16 senderPort;

    //while (true) {
        udpsocket->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);

        qDebug() << "Message from: " << sender.toString();
        qDebug() << "Message port: " << senderPort;
        qDebug() << "Message: " << buffer;
    //}
}
