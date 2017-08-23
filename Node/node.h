#ifndef NODE_H
#define NODE_H
#include"iostream"
using namespace std;

class Node
{
public:
    //Constructors
    Node();
     Node(string key_, int value_, Node &link_);
   //CopyConstructor
//    const Node &other

    //Deconstructor
    ~Node();


    //Accessors
    int get_value();
    string get_key();
    Node*& get_link();

     //Mutators
    void set_value(int value_);
    void set_key(string key_);


private :
    string key;
    int value;
    //char salt;
   Node* link;
   //Helper Functions

};
Node::Node()
{
    key="";
    value=0;
   // char='';
   link=NULL;
    //salt=rand();

}
Node::Node(string key_, int value_,Node& link_)
{
    key=key_;
    value=value_;
    link=&link_;



}
//Node::Node(const Node& copy)
//{
//    key=copy.get_key();
//    value=copy.get_value();
//    link=copy.get_link();
//}
//void Node::copy(const Node &other)
//{
//    key=other.get_key();
//    value=other.value();
//}
Node::~Node()
{
//    delete p
}
//Accessors
int Node::get_value()
{
 return value;
}

string Node::get_key()
{
 return key;
}
Node*& Node::get_link()
{
    return this->link;
}

//Mutators
void Node::set_value(int value_)
{
 value=value_;
}

void Node::set_key(string key_)
{
key=key_;
}

#endif // NODE_H
