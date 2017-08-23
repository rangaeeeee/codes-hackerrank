
//Implement the class Box 
class Box {
  
int l, b, h;

// The class should have the following functions : 
public :
// Constructors: 
//Box(Box);
Box(const Box &obj){
    
    
       this->l = obj.l;
        this->b = obj.b;
        this->h = obj.h;  
    }

    Box& operator=( const Box& obj ) {
     this->l = obj.l;
        this->b = obj.b;
        this->h = obj.h;  
      return *this;
  }
Box(){
        l = b = h = 0;
     

    }
    
Box (int x, int y, int z){
     

        l = x;
        b = y;
        h = z;
    }

 int getLength(); // Return box's length
 int getBreadth (); // Return box's breadth
 int getHeight ();  //Return box's height
 long long CalculateVolume(); // Return the volume of the box

bool operator<(Box& b){
    if(this->l < b.l){
        return true;
    }
    else if((this->b < b.b) && (this->l == b.l)){
        return true;
    }
    else if((this->h < b.h) && (this->b == b.b) && (this->l == b.l)){
        return true;
    }
    
    return false;
}

//Overload operator << as specified
friend ostream& operator<<(ostream& out, Box& B){
 //   ostream& operator<<( Box& B){
        
    out << B.l <<" " << B.b << " " << B.h ;
    return out;
}

};


    

 int Box::getLength(){
     return l;
 } // Return box's length

 int Box::getBreadth (){
     return b;
 } // Return box's breadth

 int Box::getHeight (){
     return h;
 }  //Return box's height

 long long Box::CalculateVolume(){
     unsigned long long temp ;
     
     temp = l * b; 
         temp *= h;
     return temp ;
 } // Return the volume of the box    