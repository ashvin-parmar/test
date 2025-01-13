#include <QCoreApplication>
#include<QFile>
#include<QTextStream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Ask data as command from user and word on it
    QFile file("testing.tmp");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    printf("Write all data in file testing.tmp\n");
    QTextStream w(&file);
    w<<"Prasoon"<<"\n";
    w<<"Rohit"<<"\n";
    w<<"Visanshu"<<"\n";
    w<<"Sumit"<<"\n";
    for(int i=1;i<argc;i++)  w<<argv[i]<<"\n";
    file.close();

    printf("Retrieve data from testing.tmp file\n");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream r(&file);
    QString data;
    while(1)
    {
        QString data;
        data=r.readLine();
        if(data==NULL) break;
        printf("%s\n",data.toStdString().c_str());
    }
    file.close();
    return a.exec();
}
