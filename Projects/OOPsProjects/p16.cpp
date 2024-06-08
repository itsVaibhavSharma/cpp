#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    // Using vector to manage a collection of student IDs
    vector<int> studentVector = {23, 45, 12, 56, 34};

    // Displaying student IDs using vector
    cout << "Student IDs in vector:" << endl;
    vector<int>::iterator it;
    for (it = studentVector.begin(); it != studentVector.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Sorting student IDs in vector manually (Bubble Sort)
    for (size_t i = 0; i < studentVector.size(); ++i)
    {
        for (size_t j = 0; j < studentVector.size() - i - 1; ++j)
        {
            if (studentVector[j] > studentVector[j + 1])
            {
                swap(studentVector[j], studentVector[j + 1]);
            }
        }
    }
    cout << endl << "Student IDs in vector after sorting:" << endl;
    for (it = studentVector.begin(); it != studentVector.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Reversing student IDs in vector manually
    for (size_t i = 0; i < studentVector.size() / 2; ++i)
    {
        swap(studentVector[i], studentVector[studentVector.size() - 1 - i]);
    }
    cout << endl << "Student IDs in vector after reversing:" << endl;
    for (it = studentVector.begin(); it != studentVector.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // // Removing a student ID from the vector
    // int idToRemove = 56;
    // studentVector.erase(remove(studentVector.begin(), studentVector.end(), idToRemove), studentVector.end());
    // cout << endl << "Student IDs in vector after removing " << idToRemove << ":" << endl;
    // for ( it = studentVector.begin(); it != studentVector.end(); ++it) {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // Using list to manage a collection of student IDs
    list<int> studentList = {78, 34, 23, 89, 56};

    // Displaying student IDs using list
    cout << endl << "Student IDs in list:" << endl;
    for (list<int>::iterator it = studentList.begin(); it != studentList.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Sorting student IDs in list manually (Insertion Sort)
    for (list<int>::iterator it = studentList.begin(); it != studentList.end(); ++it)
    {
        list<int>::iterator minIt = it;
        for (list<int>::iterator jt = next(it); jt != studentList.end(); ++jt)
        {
            if (*jt < *minIt)
            {
                minIt = jt;
            }
        }
        if (minIt != it)
        {
            swap(*it, *minIt);
        }
    }
    cout << endl << "Student IDs in list after sorting:" << endl;
    for (list<int>::iterator it = studentList.begin(); it != studentList.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Reversing student IDs in list manually
    studentList.reverse();
    cout << endl << "Student IDs in list after reversing:" << endl;
    for (list<int>::iterator it = studentList.begin(); it != studentList.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Removing a student ID from the list
    studentList.remove(23);
    cout << endl << "Student IDs in list after removing 23:" << endl;
    for (list<int>::iterator it = studentList.begin(); it != studentList.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Different types of traversals
    // Forward traversal using iterators (vector)
    cout << endl << "Forward traversal of vector using iterators:" << endl;
    for (it = studentVector.begin(); it != studentVector.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse traversal using reverse iterators (vector)
    cout << endl << "Reverse traversal of vector using reverse iterators:" << endl;
    for (vector<int>::reverse_iterator rit = studentVector.rbegin(); rit != studentVector.rend(); ++rit)
    {
        cout << *rit << " ";
    }
    cout << endl;

    // Forward traversal using iterators (list)
    cout << endl << "Forward traversal of list using iterators:" << endl;
    for (list<int>::iterator it = studentList.begin(); it != studentList.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse traversal using reverse iterators (list)
    cout << endl << "Reverse traversal of list using reverse iterators:" << endl;
    for (list<int>::reverse_iterator rit = studentList.rbegin(); rit != studentList.rend(); ++rit)
    {
        cout << *rit << " ";
    }
    cout << endl;

    //Popping and pushing in front in list
    studentList.pop_front();
    studentList.push_front(69);
    cout << endl << "Traversal after pop and push 69 from front:" << endl;
    for(auto id : studentList){
        cout << id << " ";
    }
    cout << endl;

    return 0;
}
