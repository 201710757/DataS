#include "CLinkedList.h"
#include<iostream>
using namespace std;
int main(void)
{
  CList * list = new CList();

  int employeeNum = -1;
  
  char e1[] = "JIHOON1";
  char e2[] = "JIHOON2";
  char e3[] = "JIHOON3";
  char e4[] = "JIHOON4";
  char e5[] = "JIHOON5";

  list->LInsert(1, e1);
  list->LInsert(2, e2);
  list->LInsert(3, e3);
  list->LInsert(4, e4);
  list->LInsert(5, e5);


  char *employeeName = new char[8];


  if(list->LFirst(&employeeNum, employeeName))
  {
      cout<<"Num : "<< employeeNum <<" Name : "<<employeeName<<endl;
      for(int i=0;i<list->LCount()-1;i++)
          if(list->LNext(&employeeNum, employeeName))
              cout<<"Num : "<<employeeNum<<" Name : "<<employeeName<<endl;
  }
  
  char f[] = "JIHOON1";
  int c = 3;
  Data res = list->returnEmployee(f, c);
  cout<<"RES : "<<f<<" plus "<<c<<"Days ID: "<<res<<endl;






  return 0;
}
