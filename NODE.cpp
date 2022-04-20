#include <iostream>
using namespace std;
#include"NODE.h"

NODE::NODE(int x){
      data=x;
      next=NULL;
      cout<<"adding "<< x<<endl;
}
NODE:: ~NODE(){
      cout<<"Node "<<data<<" is being deleted"<<endl;
}
NODE* NODE::move_next(){
      return next;
}
void  NODE::show_node(){
      if(data!=0) cout<<"Node data: "<<data<<endl;
      else cout<<"Node data: "<<data<<" pass away"<<endl;
}
void NODE::insert(NODE*& x){
     x->next=this;

     }
void NODE::attack(){
     data=0; 
}
int NODE::nodedata(){
  int x;   
  x=data; 
  return x;
}
