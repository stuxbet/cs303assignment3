

#include "queuey.h";
#include "sort.h";
#include <iostream>
using namespace std;

int main() {
    queuey<int> myQ = queuey<int>();

   if (myQ.empty() == true) { cout << "empty" << endl; }

    for (int i = 0; i < 10; i++) {
        myQ.push(i);
    }
    myQ.pop();
    if (myQ.empty() == false) { cout << "full" << endl; }
    myQ.print();
    cout<< myQ.front()->data <<endl;
    //myQ.movetorear();
    myQ.print();
    vector<int> vectosearch = {0,1,10,5,10};
    int index = linear_search(vectosearch, 10, vectosearch.size()-1);

    cout << "Last instance of 10 in vec is: " << index << endl;






    list<int> myList = { 5, 2, 8, 1, 3 };

    cout << "Original list: ";
    for (const int& val : myList) {
        cout << val << " ";
    }
    cout << endl;

    insertionSort(myList);

    cout << "Sorted list: ";
    for (const int& val : myList) {
        cout << val << " ";
    }
    cout << std::endl;




    return 0;
}
