/*

 * @author rangarajan

 * Big Integer library in C++, single file implementation.

 */

#include <iostream>

#include <string>

#include <sstream>

#include <cmath>

#include <vector>

#define MAX 10000 // for strings



#define debug 0



using namespace std;

class BigInteger {

private:

    string number;

    bool sign;

public:

    BigInteger(); // empty constructor initializes zero

    BigInteger(string s); // "string" constructor

    BigInteger(string s, bool sin); // "string" constructor

    BigInteger(int n); // "int" constructor

    void setNumber(string s);

    const string& getNumber(); // retrieves the number

    void setSign(bool s);

    const bool& getSign();

    BigInteger absolute(); // returns the absolute value

    void operator = (BigInteger b);

    bool operator == (BigInteger b);

    bool operator != (BigInteger b);

    bool operator > (BigInteger b);

    bool operator < (BigInteger b);

    bool operator >= (BigInteger b);

    bool operator <= (BigInteger b);

    BigInteger operator | (BigInteger b);

    BigInteger operator & (BigInteger b);

    BigInteger operator ^ (BigInteger b);

    BigInteger& operator ++(); // prefix

    BigInteger  operator ++(int); // postfix

    BigInteger& operator --(); // prefix

    BigInteger  operator --(int); // postfix

    BigInteger operator + (BigInteger b);

    BigInteger operator - (BigInteger b);

    BigInteger operator * (BigInteger b);

    BigInteger operator / (BigInteger b);

    BigInteger operator % (BigInteger b);

    BigInteger& operator += (BigInteger b);

    BigInteger& operator -= (BigInteger b);

    BigInteger& operator *= (BigInteger b);

    BigInteger& operator /= (BigInteger b);

    BigInteger& operator %= (BigInteger b);

    BigInteger& operator [] (int n);

    BigInteger operator -(); // unary minus sign

    operator string(); // for conversion from BigInteger to string

private:

    bool equals(BigInteger n1, BigInteger n2);

    bool less(BigInteger n1, BigInteger n2);

    bool greater(BigInteger n1, BigInteger n2);

    string add(string number1, string number2);

    string subtract(string number1, string number2);

    string multiply(string n1, string n2);

    pair<string, long long> divide(string n, long long den);

    string toString(long long n);

    long long toInt(string s);

};











//------------------------------------------------------------------------------

//Ranga

BigInteger BigInteger::operator |(BigInteger b) {

stringstream ss;

vector<bool> number1;

vector<bool> number2;

number1.clear();

number2.clear();



string zero = "0";

string one  = "1";

string two  = "2";
BigInteger num1 ((*this).getNumber());

BigInteger num2 (b.getNumber());


#if debug 

cout << " AND operator " << endl;

cout << " *this : " << (*this).getNumber() << endl;

cout << " b     : " << b.getNumber() << endl;



/*for(int i = 0;i<num2.length(); i++){

int temp1 = int(num1[i]) - (int)'0';

int temp2 = int(num2[i]) - (int)'0';

int temp = temp1 | temp2;

  cout << " num2 str : " << num2[i] << " num2 int : " << temp << " char :"<< (char)temp<<  endl;



ss << temp;

}

*/

#endif
#if 0
if(num1.getNumber() == zero)

{

number1.push_back(false);

}

else if(num1.getNumber() == one){

number1.push_back(true);

}

if(num2.getNumber() == zero)

{

number2.push_back(false);

}

else if(num2.getNumber() == one){

number2.push_back(true);

}
#endif
BigInteger bigTwo(two);

while(num1.getNumber() != zero){

if((num1 % bigTwo) == zero)

number1.push_back(false);

else

number1.push_back(true);

//cout << "number 1 : " << num1.getNumber() << endl;



num1 = num1 / bigTwo;

}

while(num2.getNumber() != zero){

if((num2 % bigTwo) == zero)

number2.push_back(false);

else

number2.push_back(true);

//cout << "number 2 : " << num1.getNumber() << endl;

num2 = num2 / bigTwo;

}



//need to pad the lower size vector with zero for ANDing

if(number1.size() > number2.size()){

int diff = number1.size() - number2.size();



for(int i = 1;i <= diff;i++){

number2.push_back(false);

}

}

else{

int diff = number2.size() - number1.size();



for(int i = 1;i <= diff;i++){

number1.push_back(false);

}

}



vector<bool> result;

vector<bool>::iterator it1 = number1.begin();

vector<bool>::iterator it2 = number2.begin();

for(; it1 != number1.end(); it1++,it2++) {

if(*it1 == false && *it2 == false)

result.push_back(false);

else

result.push_back(true);

}

BigInteger finalValue(zero);

BigInteger value(one);

cout << "Bit value of OR result : ";

for(vector<bool>::iterator it = result.begin(); it != result.end(); it++) {



if(*it == true){

finalValue += value;

}

#if debug 

cout << *it;

//cout << "finalValue : "<< finalValue.getNumber() << " value : " << value.getNumber() << endl;

#endif

value = value * bigTwo;

}

#if debug 

cout << endl;

cout << "result : " << finalValue.getNumber() << endl;

#endif





return finalValue;

}



BigInteger BigInteger::operator &(BigInteger b) {

stringstream ss;

vector<bool> number1;

vector<bool> number2;

string zero = "0";

string one  = "1";

string two  = "2";
BigInteger num1 ((*this).getNumber());

BigInteger num2 (b.getNumber());


#if debug 

cout << " AND operator " << endl;

cout << " *this : " << (*this).getNumber() << endl;

cout << " b     : " << b.getNumber() << endl;



/*for(int i = 0;i<num2.length(); i++){

int temp1 = int(num1[i]) - (int)'0';



int temp2 = int(num2[i]) - (int)'0';



int temp = temp1 | temp2;



  cout << " num2 str : " << num2[i] << " num2 int : " << temp << " char :"<< (char)temp<<  endl;



ss << temp;

}

*/

cout << "size of number 1 : " << number1.size() << endl;

cout << "size of number 2 : " << number2.size() << endl;
#endif
#if 0
if(num1.getNumber() == zero)

{

number1.push_back(false);

}

else if(num1.getNumber() == one){

number1.push_back(true);

}

if(num2.getNumber() == zero)

{

number2.push_back(false);

}

else if(num2.getNumber() == one){

number2.push_back(true);

}
#endif
BigInteger bigTwo(two);

//cout << "size of number 1 : " << number1.size() << endl;

//cout << "size of number 2 : " << number2.size() << endl;

while(num1.getNumber() != zero){

if((num1 % bigTwo) == zero)

number1.push_back(false);

else

number1.push_back(true);



//cout << "number 1 : " << num1.getNumber() << endl;

num1 = num1 / bigTwo;

}

while(num2.getNumber() != zero){

if((num2 % bigTwo) == zero)

number2.push_back(false);

else

number2.push_back(true);



//cout << "number 2 : " << num1.getNumber() << endl;

num2 = num2 / bigTwo;

}



//need to pad the lower size vector with zero for ANDing

if(number1.size() > number2.size()){

int diff = number1.size() - number2.size();



for(int i = 1;i <= diff;i++){

number2.push_back(false);

}

}

else{

int diff = number2.size() - number1.size();



for(int i = 1;i <= diff;i++){

number1.push_back(false);

}

}

#if debug 

cout << "Bit value of Num1 : ";

for(vector<bool>::reverse_iterator it = number1.rbegin(); it != number1.rend(); it++) {

cout << *it;

}

cout << endl;

cout << "Bit value of Num2 : ";

for(vector<bool>::reverse_iterator it = number2.rbegin(); it != number2.rend(); it++) {

cout << *it;

}

cout << endl;

#endif

vector<bool> result;

vector<bool>::iterator it1 = number1.begin();

vector<bool>::iterator it2 = number2.begin();

for(; it1 != number1.end(); it1++,it2++) {

if(*it1 == true && *it2 == true)

result.push_back(true);

else

result.push_back(false);

}

BigInteger finalValue(zero);

BigInteger value(one);

#if debug 

cout << "Bit value of AND result : ";

for(vector<bool>::reverse_iterator it = result.rbegin(); it != result.rend(); it++) {

cout << *it;

}

#endif

for(vector<bool>::iterator it = result.begin(); it != result.end(); it++) {



if(*it == true){

finalValue += value;

}

#if debug 

//cout << *it;

//cout << "finalValue : "<< finalValue.getNumber() << " value : " << value.getNumber() << endl;

#endif

value = value * bigTwo;

}

#if debug

cout << endl;



cout << "result : " << finalValue.getNumber() << endl;

#endif



number1.clear();

number2.clear();

return finalValue;



}



BigInteger BigInteger::operator ^(BigInteger b) {

stringstream ss;

vector<bool> number1;

vector<bool> number2;

string zero = "0";

string one  = "1";

string two  = "2";
BigInteger num1 ((*this).getNumber());

BigInteger num2 (b.getNumber());


#if debug 

cout << " AND operator " << endl;

cout << " *this : " << (*this).getNumber() << endl;

cout << " b     : " << b.getNumber() << endl;



/*for(int i = 0;i<num2.length(); i++){

int temp1 = int(num1[i]) - (int)'0';

int temp2 = int(num2[i]) - (int)'0';

int temp = temp1 | temp2;

  cout << " num2 str : " << num2[i] << " num2 int : " << temp << " char :"<< (char)temp<<  endl;



ss << temp;

}

*/

cout << "size of number 1 : " << number1.size() << endl;

cout << "size of number 2 : " << number2.size() << endl;
#endif

if(num1.getNumber() == zero)

{

number1.push_back(false);

}

else if(num1.getNumber() == one){

number1.push_back(true);

}

if(num2.getNumber() == zero)

{

number2.push_back(false);

}

else if(num2.getNumber() == one){

number2.push_back(true);

}

BigInteger bigTwo(two);

//cout << "size of number 1 : " << number1.size() << endl;

//cout << "size of number 2 : " << number2.size() << endl;

while(num1.getNumber() != zero){

if((num1 % bigTwo) == zero)

number1.push_back(false);

else

number1.push_back(true);



//cout << "number 1 : " << num1.getNumber() << endl;

num1 = num1 / bigTwo;

}

while(num2.getNumber() != zero){

if((num2 % bigTwo) == zero)

number2.push_back(false);

else

number2.push_back(true);



//cout << "number 2 : " << num1.getNumber() << endl;

num2 = num2 / bigTwo;

}



//need to pad the lower size vector with zero for ANDing

if(number1.size() > number2.size()){

int diff = number1.size() - number2.size();



for(int i = 1;i <= diff;i++){

number2.push_back(false);

}

}

else{

int diff = number2.size() - number1.size();



for(int i = 1;i <= diff;i++){

number1.push_back(false);

}

}

#if debug 

cout << "Bit value of Num1 : ";

for(vector<bool>::reverse_iterator it = number1.rbegin(); it != number1.rend(); it++) {

cout << *it;

}

cout << endl;

cout << "Bit value of Num2 : ";

for(vector<bool>::reverse_iterator it = number2.rbegin(); it != number2.rend(); it++) {

cout << *it;

}

cout << endl;

#endif

vector<bool> result;

vector<bool>::iterator it1 = number1.begin();

vector<bool>::iterator it2 = number2.begin();

for(; it1 != number1.end(); it1++,it2++) {

if(*it1 =! *it2 )

result.push_back(true);

else

result.push_back(false);

}

BigInteger finalValue(zero);

BigInteger value(one);

#if debug 

cout << "Bit value of AND result : ";

for(vector<bool>::reverse_iterator it = result.rbegin(); it != result.rend(); it++) {

cout << *it;

}

#endif

for(vector<bool>::iterator it = result.begin(); it != result.end(); it++) {



if(*it == true){

finalValue += value;

}

#if debug 

//cout << *it;

//cout << "finalValue : "<< finalValue.getNumber() << " value : " << value.getNumber() << endl;

#endif

value = value * bigTwo;

}

#if debug

cout << endl;

cout << "result : " << finalValue.getNumber() << endl;

#endif



number1.clear();

number2.clear();

return finalValue;

}



BigInteger::BigInteger() { // empty constructor initializes zero

    number = "0";

    sign = false;

}



BigInteger::BigInteger(string s) { // "string" constructor

    if( isdigit(s[0]) ) { // if not signed

        setNumber(s);

        sign = false; // +ve

    } else {

        setNumber( s.substr(1) );

        sign = (s[0] == '-');

    }

}



BigInteger::BigInteger(string s, bool sin) { // "string" constructor

    setNumber( s );

    setSign( sin );

}



BigInteger::BigInteger(int n) { // "int" constructor

    stringstream ss;

    string s;

    ss << n;

    ss >> s;





    if( isdigit(s[0]) ) { // if not signed

        setNumber( s );

        setSign( false ); // +ve

    } else {

        setNumber( s.substr(1) );

        setSign( s[0] == '-' );

    }

}



void BigInteger::setNumber(string s) {

    number = s;

}



const string& BigInteger::getNumber() { // retrieves the number

    return number;

}



void BigInteger::setSign(bool s) {

    sign = s;

}



const bool& BigInteger::getSign() {

    return sign;

}



BigInteger BigInteger::absolute() {

    return BigInteger( getNumber() ); // +ve by default

}



void BigInteger::operator = (BigInteger b) {

    setNumber( b.getNumber() );

    setSign( b.getSign() );

}



bool BigInteger::operator == (BigInteger b) {

    return equals((*this) , b);

}



bool BigInteger::operator != (BigInteger b) {

    return ! equals((*this) , b);

}



bool BigInteger::operator > (BigInteger b) {

    return greater((*this) , b);

}



bool BigInteger::operator < (BigInteger b) {

    return less((*this) , b);

}



bool BigInteger::operator >= (BigInteger b) {

    return equals((*this) , b)

           || greater((*this), b);

}



bool BigInteger::operator <= (BigInteger b) {

    return equals((*this) , b)

           || less((*this) , b);

}



BigInteger& BigInteger::operator ++() { // prefix

    (*this) = (*this) + 1;

    return (*this);

}





BigInteger BigInteger::operator ++(int) { // postfix

    BigInteger before = (*this);



    (*this) = (*this) + 1;



    return before;

}



BigInteger& BigInteger::operator --() { // prefix

    (*this) = (*this) - 1;

    return (*this);



}



BigInteger BigInteger::operator --(int) { // postfix

    BigInteger before = (*this);



    (*this) = (*this) - 1;



    return before;

}



BigInteger BigInteger::operator + (BigInteger b) {

    BigInteger addition;

    if( getSign() == b.getSign() ) { // both +ve or -ve

        addition.setNumber( add(getNumber(), b.getNumber() ) );

        addition.setSign( getSign() );

    } else { // sign different

        if( absolute() > b.absolute() ) {

            addition.setNumber( subtract(getNumber(), b.getNumber() ) );

            addition.setSign( getSign() );

        } else {

            addition.setNumber( subtract(b.getNumber(), getNumber() ) );

            addition.setSign( b.getSign() );

        }

    }

    if(addition.getNumber() == "0") // avoid (-0) problem

        addition.setSign(false);



    return addition;

}



BigInteger BigInteger::operator - (BigInteger b) {

    b.setSign( ! b.getSign() ); // x - y = x + (-y)

    return (*this) + b;

}



BigInteger BigInteger::operator * (BigInteger b) {

    BigInteger mul;



    mul.setNumber( multiply(getNumber(), b.getNumber() ) );

    mul.setSign( getSign() != b.getSign() );



    if(mul.getNumber() == "0") // avoid (-0) problem

        mul.setSign(false);



    return mul;

}



// Warning: Denomerator must be within "long long" size not "BigInteger"

BigInteger BigInteger::operator / (BigInteger b) {

    long long den = toInt( b.getNumber() );

    BigInteger div;



    div.setNumber( divide(getNumber(), den).first );

    div.setSign( getSign() != b.getSign() );



    if(div.getNumber() == "0") // avoid (-0) problem

        div.setSign(false);



    return div;

}



// Warning: Denomerator must be within "long long" size not "BigInteger"

BigInteger BigInteger::operator % (BigInteger b) {

    long long den = toInt( b.getNumber() );



    BigInteger rem;

    long long rem_int = divide(number, den).second;

    rem.setNumber( toString(rem_int) );

    rem.setSign( getSign() != b.getSign() );



    if(rem.getNumber() == "0") // avoid (-0) problem

        rem.setSign(false);



    return rem;

}



BigInteger& BigInteger::operator += (BigInteger b) {

    (*this) = (*this) + b;

    return (*this);

}



BigInteger& BigInteger::operator -= (BigInteger b) {

    (*this) = (*this) - b;

    return (*this);

}



BigInteger& BigInteger::operator *= (BigInteger b) {

    (*this) = (*this) * b;

    return (*this);

}



BigInteger& BigInteger::operator /= (BigInteger b) {

    (*this) = (*this) / b;

    return (*this);

}



BigInteger& BigInteger::operator %= (BigInteger b) {

    (*this) = (*this) % b;

    return (*this);

}



BigInteger& BigInteger::operator [] (int n) {

    return *(this + (n*sizeof(BigInteger)));

}



BigInteger BigInteger::operator -() { // unary minus sign

    return (*this) * -1;

}



BigInteger::operator string() { // for conversion from BigInteger to string

    string signedString = ( getSign() ) ? "-" : ""; // if +ve, don't print + sign

    signedString += number;

    return signedString;

}



bool BigInteger::equals(BigInteger n1, BigInteger n2) {

    return n1.getNumber() == n2.getNumber()

           && n1.getSign() == n2.getSign();

}



bool BigInteger::less(BigInteger n1, BigInteger n2) {

    bool sign1 = n1.getSign();

    bool sign2 = n2.getSign();



    if(sign1 && ! sign2) // if n1 is -ve and n2 is +ve

        return true;



    else if(! sign1 && sign2)

        return false;



    else if(! sign1) { // both +ve

        if(n1.getNumber().length() < n2.getNumber().length() )

            return true;

        if(n1.getNumber().length() > n2.getNumber().length() )

            return false;

        return n1.getNumber() < n2.getNumber();

    } else { // both -ve

        if(n1.getNumber().length() > n2.getNumber().length())

            return true;

        if(n1.getNumber().length() < n2.getNumber().length())

            return false;

        return n1.getNumber().compare( n2.getNumber() ) > 0; // greater with -ve sign is LESS

    }

}



bool BigInteger::greater(BigInteger n1, BigInteger n2) {

    return ! equals(n1, n2) && ! less(n1, n2);

}



string BigInteger::add(string number1, string number2) {

    string add = (number1.length() > number2.length()) ?  number1 : number2;

    char carry = '0';

    int differenceInLength = abs( (int) (number1.size() - number2.size()) );



    if(number1.size() > number2.size())

        number2.insert(0, differenceInLength, '0'); // put zeros from left



    else// if(number1.size() < number2.size())

        number1.insert(0, differenceInLength, '0');



    for(int i=number1.size()-1; i>=0; --i) {

        add[i] = ((carry-'0')+(number1[i]-'0')+(number2[i]-'0')) + '0';



        if(i != 0) {

            if(add[i] > '9') {

                add[i] -= 10;

                carry = '1';

            } else

                carry = '0';

        }

    }

    if(add[0] > '9') {

        add[0]-= 10;

        add.insert(0,1,'1');

    }

    return add;

}



string BigInteger::subtract(string number1, string number2) {

    string sub = (number1.length()>number2.length())? number1 : number2;

    int differenceInLength = abs( (int)(number1.size() - number2.size()) );



    if(number1.size() > number2.size())

        number2.insert(0, differenceInLength, '0');



    else

        number1.insert(0, differenceInLength, '0');



    for(int i=number1.length()-1; i>=0; --i) {

        if(number1[i] < number2[i]) {

            number1[i] += 10;

            number1[i-1]--;

        }

        sub[i] = ((number1[i]-'0')-(number2[i]-'0')) + '0';

    }



    while(sub[0]=='0' && sub.length()!=1) // erase leading zeros

        sub.erase(0,1);



    return sub;

}



string BigInteger::multiply(string n1, string n2) {

    if(n1.length() > n2.length())

        n1.swap(n2);



    string res = "0";

    for(int i=n1.length()-1; i>=0; --i) {

        string temp = n2;

        int currentDigit = n1[i]-'0';

        int carry = 0;



        for(int j=temp.length()-1; j>=0; --j) {

            temp[j] = ((temp[j]-'0') * currentDigit) + carry;



            if(temp[j] > 9) {

                carry = (temp[j]/10);

                temp[j] -= (carry*10);

            } else

                carry = 0;



            temp[j] += '0'; // back to string mood

        }



        if(carry > 0)

            temp.insert(0, 1, (carry+'0'));



        temp.append((n1.length()-i-1), '0'); // as like mult by 10, 100, 1000, 10000 and so on



        res = add(res, temp); // O(n)

    }



    while(res[0] == '0' && res.length()!=1) // erase leading zeros

        res.erase(0,1);



    return res;

}



pair<string, long long> BigInteger::divide(string n, long long den) {

    long long rem = 0;

    string result;

    result.resize(MAX);



    for(int indx=0, len = n.length(); indx<len; ++indx) {

        rem = (rem * 10) + (n[indx] - '0');

        result[indx] = rem / den + '0';

        rem %= den;

    }

    result.resize( n.length() );



    while( result[0] == '0' && result.length() != 1)

        result.erase(0,1);



    if(result.length() == 0)

        result = "0";



    return make_pair(result, rem);

}



string BigInteger::toString(long long n) {

    stringstream ss;

    string temp;



    ss << n;

    ss >> temp;



    return temp;

}



long long BigInteger::toInt(string s) {

    long long sum = 0;



    for(int i=0; i<s.length(); i++)

        sum = (sum*10) + (s[i] - '0');



    return sum;

}
#include <cstring>
#include <climits>

int main() {
    int testcase;
    BigInteger ones("1");
    BigInteger prev("1");
        BigInteger curr("1");
        BigInteger next("1");
        BigInteger sum("0");
    
    string temp = to_string(LONG_MAX);
    BigInteger max(temp);
    
    long long previous = 1,current = 1, nxt = 1,sumall = 0,numberlong = 0;
    
    cin >> testcase;
    BigInteger cond("0");
    for(int i = 0; i < testcase; i++){
        string num;
        cin >> num;
        BigInteger number(num);
        if(number >= max){
        prev.setNumber("1");
        curr.setNumber("1");
        next.setNumber("1");
        sum.setNumber("0");
        
        
        cout << "long max : " << LONG_MAX << endl;
        while(next <= number){
            
            cond = next & ones;
            
         //   cout <<"prev : " << prev.getNumber()<<" curr : " << curr.getNumber()<<" next : " << next.getNumber()<<" cond : " << cond.getNumber() << " sum : "<< sum.getNumber() << endl;
            string temp = cond.getNumber();
            if(!strcmp("0",&temp[0])){
            
                sum += next;
            }
            next = prev+curr;
            prev = curr;
            curr = next;
            
        }
        
        cout << sum.getNumber() << endl;
        }
        else{
        previous = 1;
        current = 1;
            nxt = 1;
            sumall = 0;
        string str = number.getNumber();
        numberlong = stoll(str);
        
       // cout << "numberlong : " << numberlong << endl;
        while(nxt <= numberlong){
            
        
            
         //   cout <<"prev : " << prev.getNumber()<<" curr : " << curr.getNumber()<<" next : " << next.getNumber()<<" cond : " << cond.getNumber() << " sum : "<< sum.getNumber() << endl;
            string temp = cond.getNumber();
            if(!(nxt & 1)){
            
                sumall += nxt;
            }
            nxt = previous + current;
            previous = current;
            current = nxt;
            
        }
        
        cout << sumall << endl;
        }
        
        
    }
    return 0;
}