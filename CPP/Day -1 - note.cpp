//g++ -std=c++11 trys.cpp
//./a.out
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
//functions
int addNumber(int firstNum, int secondNum=0){

    int combinedValue = firstNum + secondNum;

    return combinedValue;

};

int addNumber(int firstNum, int secondNum, int thirdNum){

    return firstNum + secondNum + thirdNum;
};

//recursive functions
int getFactorial(int number){

    int sum;
    if (number ==1) sum=1;
    else sum = getFactorial(number - 1) * number;
    return sum;
}
//pass by pointer
void makeMeYoung(int* age){
    cout<< "I used to be "<<*age<<endl;
    *age = 21;
};
//pass by reference
void actYourAge(int& age){
    age =39;
};

//class
class Animal{
        private://variables are only going to be changed within the class
           // Attributes: height weight variables
            //Capabilities: Run Eat functions/methods
            int height;
            int weight;
            string name;
            static int numOfAnimals;//static variable:going to be shared by every object of type animal this is ever created
        public://public / encapsulation
            int getHeight(){return height;}
            int getWeight(){return weight;}
            string getName(){return name;}
            void setHeight(int cm){height = cm; }
            void setWeight(int kg){weight=kg; }
            void setName(int animalName){name = animalName; }

            void setAll(int,int,string);
            Animal(int,int,string);//constructor a function that is called automatically once a object is created
            ~Animal();//destructor
            Animal();

            static int getNumOfAnimals(){return numOfAnimals;}//static method, can only access to static variable
            void toString();
        };

        //declaration
        int Animal::numOfAnimals =0;
        void Animal::setAll(int height,int weight, string name){
            this ->height =height;//this: specific object
            this ->weight =weight;
            this ->name=name;
            Animal::numOfAnimals++;

        };

Animal::Animal(int height, int weight, string name){
            this ->height =height;
            this ->weight =weight;
            this ->name=name;
            Animal::numOfAnimals++;
};

Animal::~Animal(){
    cout<<"Animal"<<this->name<<"destroyed"<<endl;
};
Animal::Animal(){
    Animal::numOfAnimals++;
};
void Animal::toString(){
    cout<<this->name<<"is" <<this->height<<"cms tall and" <<this->weight<<"kgs in weight"<<endl;
}

//inheritance
class Dog : public Animal{
private:
        string sound ="Woof";
public:
    void getSound(){cout<<sound<<endl;}
    Dog(int,int,string,string);
    Dog():Animal(){};
    void toString();
}

Dog::Dog(int height, int weight, string name, string bark):
Animal(height,weight,name){

    this ->sound =bark;

}
void Dog::toString(){
    cout<<this->getName()<<"is"<<this->getWeight()<<
    "cms tall and"<< this->getWeight()<<"kgs in weight and says"
    <<this ->sound;
}

int main(){
    //data types
    cout << "Hello World" << endl;
    const double PI = 3.1415926535;
    char myGrade='A';
    bool isHappy = true;
    int myAge = 18;
    float favNum = 3.141592;
    double otherfavNum = 1.6180339887;
    cout << "Size of int " << sizeof(myAge) << endl;
     //other types include
    //short int: at least 16 bits
    //long int: at least 32 bits
    //long long int: at least 64 bits
    //unsigned int: same size as signed version
    //long double: not less than double

    //arithmetic +, -, *, /, ++, --,
    int five = 5;
    cout <<  "5++ ="  <<  five++ << endl;
    cout <<  "++5 ="  << ++five  << endl;
    cout << "5-- =" << five-- << endl;
    cout << "--5 =" << --five << endl;

    five += 6;
    five = five + 6;

    cout << "4 / 5 = " << (float) 4 / 5 << endl;

    //if statement == , != , > , < , >=, &&, ||, !
    int age = 100;
    int ageAtLastExam = 16;
    bool isNotIntoxicated = true;
    if ((age >= 1) && (age < 16)){

        cout << "You can't drive" << endl;

    } else if (age >=80 && (age > 100) || (age - ageAtLastExam > 5)){

        cout << "You can't drive" << endl;

    }else {

         cout << "You can drive" << endl;

    }

    // switch statement
    int age = 21;

    switch(age){
        case 16 :
                cout << "hey you can drive now" << endl;
                break;
        case 18 :
                cout << "go buy some lotto tickets~!" << endl;
                break;
        case 21 :
                cout << "buy me some beer" << endl;
                break;
        default :
                cout << "sorry you get nothing" << endl;
    }

     //ternary operator
    variable = (condtion) ? true : false
    int largestNum = ( 5 > 2) ? 5 : 2;

    //arrays
    int myFavNums[5];
    int badNums[5]  =  { 4 , 13 , 14 , 24 , 34 }
    cout <<  "Bad Number 1: " << badNums[0] << endl;
    char myName[5][5] = {{'D','E','R','E','K'},
                                        {'B','A','N','A','S'}};
    cout << "2nd letter in 2nd array" << myName[1][1] << endl;
    myName[0][2] = 'e';
    cout << "New Value " << myName[0][2] << endl;


    //for loop
    for (int i =1; i <= 10; i++){

        cout <<  i  << endl;

    }

    for ( int  j=0; j < 5; j++){
        for ( int k =0; k<5; k++){
            cout << myName[j][k];
        }
      cout << endl;
    }

    // while loop
    int randNum = (rand() % 100) + 1;

    while (randNum != 100){

        cout <<  randNum <<  ", ";

        randNum = (rand() % 100) + 1;

    }

    // do while loop
    string numberGuessed;
    int intNumberGuessed = 0;

    do{

        cout << "Guess between 1 and 10: ";

        getline(cin, numberGuessed);//user input

        intNumberGuessed = stoi(numberGuessed);//convert string

        cout << intNumberGuessed << endl;

    } while (intNumberGuessed != 4);

    cout << "You win" << endl;

    //string
    char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0' };
    string birthdayString  = "Birthday";
    cout << happyArray + birthdayString <<endl;

    string yourName;
    cout << "What is your name";
    getline(cin, yourName);

    cout << 'Hello' << yourName << endl;

    double eulerConstant = .57721;
    string eulerGuess;
    double eulerGuessDouble;

    cout << "What is Euler's Constant? ";
    geline(cin, eulerGuess);
    eulerGuessDouble = stod(eulerGuess); //convert string to double
    if (eulerGuessDouble == eulerConstant){
        cout << "You are right" << endl;
    }else {
        cout << "You are wrong" << endl;
    }
    //string methods
    cout << "Size of String" << eulerGuess.size() <<endl;
    cout <<"Is string empy" << eulerGuess.empyt() <<endl;
    cout << eulerGuess.append("was your guess") <<endl;

    string dogString = "dog";
    string catString = "cat";

    cout << dogString.compare(catString) << endl;
    cout << dogString.compare(dogString) << endl;
    cout << catString.compare(dogString) << endl;

    string yourName;
    cout << "What is your name ";
    getline(cin, yourName);

    cout <<" Hello " << yourName << endl;

    string wholeName = yourName.assign(yourName);//replace variable with sth inside the bracket
    cout << wholeName << endl;

    string firstName= wholeName.assign(wholeName, 0, 4);
    cout << firstName << endl;

    int lastNameIndex = yourName.find("Huang", 0);
    cout << "Index for last name " << lastNameIndex << endl;

    yourName.inset(5, "Justin");
    cout << yourName << endl;

    yourName.erase(6,7);
    cout << yourName << endl;

    yourName.replace(4,5,"Maximus");
    cout << yourName  <<  endl;

    //vectors just like arrays, but size can be changed
    vector <int>  lotteryNumVect(10);

    int lotteryNumArray[5] = {4,13,14,24,34};

    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray,lotteryNumArray+3);//the starting point, the content, the length

    cout << lotteryNumVect.at(2) << endl; //14

    lotteryNumVect.insert(lotteryNumVect.begin()+5,44);

    cout << lotteryNumVect.at(5) << endl;//44

    lotteryNumVect.push_back(64);//add at the end of the vector

    cout << "Final Value" << lotteryNumVect.back() << endl;//show the last item
    cout << "Final Value" << lotteryNumVect.front() << endl;
    cout << "Final Value" << lotteryNumVect.empty() << endl;
    cout << "Final Value" << lotteryNumVect.size() << endl;

    lotteryNumVect.pop_back();//delete the last one

    //function functions are written in front of main()
    cout << addNumber(1) << endl;
    cout << addNumber(1, 5, 6) << endl;

    //recursive functions
    cout << "The factorial of 3 is "<<getFactorial(3) << endl;

    //File I/O
    ifstream  theFile("player.txt");//ofstream
    int id;
    string name;
    double money;

    while (theFile >>id >> name >> money){
        cout << id << "," << name << ","<<money <<endl;

    }

   //another tutorial about File I/O
    string steveQuote = "A day without sunshine is like, you know, night";

    ofstream writer("stevequote.txt");

    if (!writer){
    cout <<"Error opening file" << endl;
    return -1;
    }else {
        writer << steveQuote << endl;
        writer.close();
    }

    ofstream writer2("stevequote.txt", ios::app);

    //open a stream to append to whats there with ios::app
    //ios::binary : treat the file as binary
    //ios::in : open a file to read input
    //ios::trunc : default
    //ios::out : open a file to write output
    if (!writer2){
    cout <<"Error opening file" << endl;
    return -1;
    }else {
        writer2<< "\n -Steve Martin" << endl;
        writer2.close();
    }

    char letter;
    ifstream reader("stevequote.txt");

    if (! reader){
        cout << "Error opening file"<<endl;
        return -1;
    } else {

        for (int i =0; ! reader.eof(); i++){
            reader.get(letter);
            cout<<letter;

        }
        cout << endl;
        reader.close();
    }

    //third tutorial about File I/O
    ofstream myfile;
    myfile.open("filename.txt")
    myfile<<"wrting this to a file.\n";
    myfile.close();

    ifstream MyFile("filename.txt")
    char ch;
    while(!MyFile.eof()){
        Myfile.get(ch);
        cout<<ch;
    }
    MyFile.close();
    system("PAUSE");

    //exception handling
    int number =0 ;
    try{
        if (number!=0){
            cout<<2/number <<endl;
        }else throw(number);
    }
        catch(int number){
            cout << number << "is not valid" << endl;
        }

        //pointer
        int myAge = 39;
        char myGrade= 'A';

        cout << "Size of int" <<sizeof(myAge) <<endl;
        cout << "Size of char" << sizeof(myGrade) << endl;

        cout << "myAge is locate at" << &myAge <<endl;

        //pass by variable/pass by reference
        int sum = 5;
        addThese(sum){
            //pass by variable wouldn't change the variable
            sum = 66;
        };
        addThese(int *sum){
            //pass by reference would change the variable
            *sum = 99;
        }

        int * agePtr = &myAge;//string* q;

        cout << "Address of pointer" << agePtr <<endl;
        cout << "Data at memory address" << *agePtr<<endl;//dereference

        //pointer of arrays
        int badNums[5]={4,13,14,24,34}
        int* numArrayPtr = badNums;
        cout << "Address" << numArrayPtr<<"Value" << *numArrayPtr<<endl;

        numArrayPtr++;
        cout << "Address" << numArrayPtr<<"Value" << *numArrayPtr<<endl;

        cout << "Address" << badNums<<"Value" << *badNums<<endl;//an array name is just a pointer to the array

//pass by reference
        int myAge = 39;
        makeMeYoung(&myAge);

        cout<<"I'm "<<myAge <<" years old now" << endl;

        int&  ageRef =myAge;

        cout << "myAge : " <<myAge <<endl;

        ageRef++;

        cout << "myAge : " <<myAge<<endl;

        actYourAge(ageRef);

        cout << "myAge : "<<myAge<<endl;

        //class
        Animal fred;//object
        fred.setHeight(33);
        fred.setWeight(10);
        fred.setName("Fred");
        cout<<fred.getName()<<"is"<<fred.getHeight()<<"cms tall and"<<fred.getWeight()<<"kgs n weight"<<endl;
        Animal tom(36,15,"Tom");
        cout<<tom.getName()<<"is"<<tom.getHeight()<<"cms tall and"<<tom.getWeight()<<"kgs n weight"<<endl;

        //inheritance
        cout<<"Number of Animals"<<Animal::getNumOfAnimals()<<endl;
        spot.toString();
        spot.toString();

        //call superclass construct
        spot.Animal::toString();

        //execute static method

        //virtual methods

        //polymorphism

        //abstract data type
 return 0;
}
