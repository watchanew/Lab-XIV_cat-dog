//
//  cat_dog.h
//  LLC1
//
//  Created by 6272 on 22/3/2562 BE.
//  Copyright © 2562 6272. All rights reserved.
//
//#ifndef cat_dog_h
#define cat_dog_h

class cat: public NODE{
    int size;
public:
     cat(int a,int b):NODE(b){
      size=a;
      cout<<"Construct cat size"<<a<<endl;
    }
    ~cat(){
      cout<<"Deconstruct size size "<<size<<endl;
    }
    void show_node(){
        cout<<"Meaw  "<<size<<" ";
        NODE::show_node();
    }

};

class dog: public NODE{
    float height;
public:
    dog(float a,int b):NODE(b){
      height=a;
      cout<<"Construct dog height"<<a<<endl;
    }
    ~dog(){
      cout<<"Deconstruct height height "<<height<<endl;
    }
    void show_node(){
        cout<<"Hong Hong  "<<height<<" ";
        NODE::show_node();
    }

};

