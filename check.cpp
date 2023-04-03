#include<bits/stdc++.h>
using namespace std;
struct node{
   //string name;
    float val;
    vector<node*>next;
    vector<node*> prev;
    node()
    {
        val=0;
    }
};
int main()
{
    bool check=1;
    
    // here we have to take dynanamic content at run time that will created when new connection is created
node r1 , r2 ,r3 , r4 ,g1 ,v1 ;
r1.val=2,r2.val=4,r3.val=5,r4.val=10;
//cout<<r1.val<<endl;

g1.next.push_back(&r4);r4.prev.push_back(&g1);
r1.next.push_back(&g1);g1.prev.push_back(&r1);
r2.next.push_back(&r4);r4.prev.push_back(&r2);
r3.next.push_back(&v1);v1.prev.push_back(&r3);
r4.next.push_back(&v1);v1.prev.push_back(&r4);
r1.next.push_back(&r3);r3.prev.push_back(&r1);
v1.next.push_back(&r2);r2.prev.push_back(&v1);
v1.next.push_back(&r1);r1.prev.push_back(&v1);
//cout<<((g1.prev[0])->next[1])->val<<endl;

float R1=0,R2=0,R3=0,R4=0;
//int ct=0;
//calculating R4   // remainder y type arrangement
if(g1.next.size()!=1) check=0;
else{
node* temp=g1.next[0];
// ct=0; // to if any infinite loop
// while(temp->next[0]!=&v1&&ct<100&&temp->next.size())
// {
//   R4+=temp->val;
//   temp=temp->next[0];
//   ct++;
// }
// if(ct==100) check=0;     // use check for circuit
// if(!temp->next.size()) check=0; //  circuit not complete
R4=temp->val;
if(temp->next.size()!=1  || temp->next[0]!=&v1) check=0;
}
// calculating R3
if(g1.prev.size()!=1) check=0;
else {
node* temp1=g1.prev[0];
node*temp2;
if(temp1->next[0]==&g1)
{
  temp2=temp1->next[1];
}
else if(temp1->next[1]==&g1) {
    temp2=temp1->next[0];
}
// cout<<temp1->val<<endl;
// cout<<temp2->val<<endl;
// else check=0;
// ct=0;
// while(temp2->next[0] !=&v1&&temp2->next.size()&&ct<100)
// {
//   R3+=temp2->val;
//   temp2=temp2->next[0];
//   ct++;
// }
// if(ct==100) check=0;
// if(!temp2->next.size()) check=0; //  circuit not complete

R3=temp2->val;
if(temp2->next.size()!=1  || temp2->next[0]!=&v1) check=0;
//cout<<R3<<endl;
}
// calculating R2
if(g1.next.size()!=1) check=0;
else{
node* temp1=g1.next[0];
node*temp2;
if(temp1->prev.size()!=2) check=0;
if(temp1->prev[0]==&g1)
{
  temp2=temp1->prev[1];
}
else if(temp1->prev[1]==&g1) {
    temp2=temp1->prev[0];
}
else check=0;
// ct=0;
// while(temp2->prev[0] !=&v1&&temp2->prev.size()&&ct<100)
// {
//   R2+=temp2->val;
//   temp2=temp2->prev[0];
//   ct++;
// }
// if(ct==100) check=0;
// if(!temp2->prev.size()) check=0; //  circuit not complete

R2=temp2->val;
if(temp2->prev.size()!=1  || temp2->prev[0]!=&v1) check=0;
}
// calculating R1
if(g1.prev.size()!=1) check=0;
else {
node* temp=g1.prev[0];
// ct=0;
// while(temp->prev[0] !=&v1&&temp->prev.size()&&ct<100)
// {
//   R3+=temp->val;
//   temp=temp->prev[0];
//   ct++;
// }
// if(ct==100) check=0;
// if(!temp->prev.size()) check=0; //  circuit not complete
R1=temp->val;
if(temp->prev.size()!=1 || temp->prev[0]!=&v1) check=0;
}



float rad=0;
// cout<<R1<<" "<<R2<<" "<<R3<<" "<<R4<<endl;
if(check==1)  // checking circuit complete
{
   rad=R1*R4-R2*R3;
   cout<<rad;
}
else cout<<"circuit not complete ";


return 0;
}


   /* class Node {
      constructor() {
        this.val = 0;
        this.next = [];
        this.prev = [];
      }
    } 
     { var n=allConnections.length;
      let check = true;
      for(let i=0;i<n;i++)
      {  
        let temp=Tid[i];
        
      }
      let r1 = new Node();
let r2 = new Node();
let r3 = new Node();
let r4 = new Node();
let g1 = new Node();
let v1 = new Node();

r1.val = 2;
r2.val = 4;
r3.val = 5;
r4.val = 10;

g1.next.push(r4);
r4.prev.push(g1);

r1.next.push(g1);
g1.prev.push(r1);

r2.next.push(r4);
r4.prev.push(r2);

r3.next.push(v1);
v1.prev.push(r3);

r4.next.push(v1);
v1.prev.push(r4);

r1.next.push(r3);
r3.prev.push(r1);

v1.next.push(r2);
r2.prev.push(v1);

v1.next.push(r1);
r1.prev.push(v1);

let R1 = 0;
let R2 = 0;
let R3 = 0;
let R4 = 0;

// Calculating R4
if (g1.next.length !== 1) {
  check = false;
} else {
  let temp = g1.next[0];
  R4 = temp.val;
  if (temp.next.length !== 1 || temp.next[0] !== v1) {
    check = false;
  }
}

// Calculating R3
if (g1.prev.length !== 1) {
  check = false;
} else {
  let temp1 = g1.prev[0];
  let temp2;
  if (temp1.next[0] === g1) {
    temp2 = temp1.next[1];
  } else if (temp1.next[1] === g1) {
    temp2 = temp1.next[0];
  } else {
    check = false;
  }
  R3 = temp2.val;
  if (temp2.next.length !== 1 || temp2.next[0] !== v1) {
    check = false;
  }
}

// Calculating R2
if (g1.next.length !== 1) {
  check = false;
} else {
  let temp1 = g1.next[0];
  let temp2;
  if (temp1.prev.length !== 2) {
    check = false;
  }
  if (temp1.prev[0] === g1) {
    temp2 = temp1.prev[1];
  } else if (temp1.prev[1] === g1) {
    temp2 = temp1.prev[0];
  } else {
    check = false;
  }
   R2 = temp2.val
}

  // R1 Calculating
  if (g1.prev.length !== 1) {
  check = false;
} else {
  let temp = g1.prev[0];
  R1 = temp.val;
  if (temp.prev.length !== 1 || temp.prev[0] !== v1) {
    check = false;
  }
  
}
console.log(check);
let rad=0;
if(check ==1){
	rad=R1*R4-R2*R3;
	console.log(rad);
}
else{
	console.log("wrong connections",R1,R2,R3,R4);
}
     

    } */
    //jsPlumb.removeAllEndpoints("item_input");