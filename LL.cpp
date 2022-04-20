#include <iostream>
#include "NODE.h"
#include "LL.h"
#include <time.h>
using namespace std;
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
       int i;
	NODE *t;
	for(i=0;i<size;i++){
		t=hol;
		hol=hol->move_next();
		delete t;
	}
	
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
        t->show_node();
	      t=t->move_next();    
     }
}
void LL::add_node(NODE *&A){

          hol->insert(A);
          hol=A;

       size++;

 }

void LL::snap_finger(){
  NODE* t=hol;
  int kill,destroysize,i;
  cout<<"I Am Inevitable!!"<<endl;
  srand(time(NULL));
  kill=rand()%size; //สุ่มฆ่า
  destroysize = size;
  while(destroysize!=(size/2)){
    t=hol;
    kill=rand()%size; //สุ่มฆ่า 
    for(i=0;i<size;i++){
        if(i==kill && (t->nodedata()!=0)){
          t->attack();
          destroysize--;
        }
	      t=t->move_next();    
    }      
  }
  
}