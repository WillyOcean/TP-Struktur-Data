#include "SLL.h"

using namespace std;

int main()
{
    //
    List NW;
    cout << "first(NW) sebelum createList :" << first(NW) <<endl;
    createList(NW);
    cout << "first(NW) setelah createList :" << first(NW) <<endl;
    cout <<endl;

    //ini tuh newElement
    adr P;
    P = newElement("W");
    cout << "Info(P): "<< info(P) <<endl;
    cout << "Next(P): "<< next(P) <<endl;
    cout << endl;

    //ini tuh insertFirst
    cout << "first(NW) sebelum insertfirst :" << first(NW) <<endl;
    insertFirst(NW, P);
    cout << "first(NW) setelah insertfirst :" << first(NW) <<endl;
    cout << "info First(NW): " << info(first(NW))<<endl;

    P = newElement("I");
    insertFirst(NW, P);
    cout << "info First(NW): " << info(first(NW)) << endl;
    cout << endl;

     //show
    show(NW);

    P = newElement("L");
    insertFirst(NW, P);
    show(NW);
    cout << endl;

    P = newElement("L");
    insertFirst(NW, P);
    show(NW);
    cout << endl;

    P = newElement("Y");
    insertFirst(NW, P);
    show(NW);
    cout << endl;

    //TUGAS MANDIRIIII
    cout << "LIST AWAL SEBELUM DELETE AFTER : ";
    show(NW);
    cout << "DELETE AFTER Y"<<endl;
    P = deleteAfter(NW, P, "Y");
    cout <<"LIST AKHIR SETELAH DELETE AFTER : ";
    show(NW);
    cout<<endl;

    //deleteLast
    P = deleteLast(NW);
    show(NW);
    cout << info(P) << endl << endl;

    P = deleteLast(NW);
    show(NW);
    cout << info(P) << endl << endl;

    P = deleteLast(NW);
    show(NW);
    cout << info(P) << endl << endl;

    return 0;
}
