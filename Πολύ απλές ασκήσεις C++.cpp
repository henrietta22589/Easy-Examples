/******************************************************************************
Write a C++ program to find the absolute difference between n and 51. If n is
greater than 51 return triple the absolute difference.
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    /*Δημίουργία μεταβλήτης n και της μεταβλητης sub απο την λέξη αφαίρεση*/
    float n,sub;
    cout<<"Δώσε μου έναν αριθμό";
    cout<<endl;
    cin>>n;
    if(n>51)
    {
        sub=(n-51);
        cout<<endl<<"Το τριπλάσιο της διαφόρας είναι="<<3*sub;
    }
    else 
    {
        cout<<endl<<"The number you have gave me is="<<n;
    }
    
return 0;
}
/******************************************************************************
Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
/*Καθορίσμος μίας μεταβλήτης bool,όπου την έχουμε αρχικοποιήσει με την τιμή false*/ 
bool metavliti=false;
/*Καθορίσμος τρίων μεταβλήτών int */ 
int num_1,num_2,sum=0;
cout<<"Δώσε μου διαδοχίκα δύο τίμες για ακεραίους"<<endl;
cin>>num_1>>num_2;
sum=(num_1+num_2);
cout<<endl<<"Το αθροίσμα τους είναι="<<endl<<sum;
/*Αν μία απο τις μεταβλήτες δεν είναι πάνω απο 30,η ρόη του πρόγραμμάτος θα μπεί μέσα στην if */
if(num_1>30||num_2>30||sum>30)
{
    metavliti=true;
    cout<<endl<<"my value is="<<metavliti;
}
else
{
    
    cout<<endl<<"my value is="<<metavliti;
}

/*-ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ--ΠΡΟΣΟΧΗ-
ΕΝΩ ΟΤΑΝ ΥΠΑΡΧΕΙ ΤΟ ΛΟΓΙΚΟ AND(&&) αν η μία μεταβλήτη δεν τηρεί τα κρίτίρια, δεν μπαίνει με τίποτα*/

/*if(num_1>30&&num_2>30&&sum>30)
{
    metavliti=true;
    cout<<endl<<"my value is="<<metavliti;
}
else
{
    
    cout<<endl<<"my value is="<<metavliti;
}*/
  return 0;
}
/******************************************************************************
Write a C++ program παιχνίδι για την καλύτερη κατανόηση των λογικών OR και AND
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
/*Καθορίσμος μίας μεταβλήτης bool,όπου την έχουμε αρχικοποιήσει με την τιμή false*/ 
bool metavliti=false;
/*Καθορίσμος τρίων μεταβλήτών int */ 
int num_1,num_2,sum=0;
cout<<"Δώσε μου διαδοχίκα δύο τίμες για ακεραίους"<<endl;
cin>>num_1>>num_2;
sum=(num_1+num_2);
cout<<endl<<"Το αθροίσμα τους είναι="<<endl<<sum;
/*Αν μία απο τις μεταβλήτες δεν είναι πάνω απο 30,η ρόη του πρόγραμμάτος θα μπεί μέσα στην if
Αν όμως η τιμή num_2 είναι μικρότερη απο το 30 μιας και μέτα ακολουθεί κανονίκα το λόγικο &&(AND) δεν θα μπεί
μεσα στην if..δίοτι ο Compiler βλέπει δύο μέρη--(μέρος 2) ΚΑΙ (μέρος 3) Αν το μέρος 2 δεν ισχύει, δεν ενδιαφέρει τον compiler 
να προχωρήσει παρακάτω

ΕΝΩ για το μέρος 1 και το μέρος 2 υπάρχει το λόγικο OR(||) οπότε αν η το μέρος 1 δεν τήρει τις προυποθέσεις ο compiler συνεχίζει*/
if(num_1>30||num_2>30&&sum>100)
{
    metavliti=true;
    cout<<endl<<"my value is="<<metavliti;
}
else
{
    
    cout<<endl<<"my value is="<<metavliti;
}
return 0;
}

/******************************************************************************
Calculate the sum of numbers. The maximum value of the sum is 1000;

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    /*Εδώ ορίοθετούμε την ελάχιστη τιμή που μπορεί να πάρει το value*/
    int value=0,sum=0;
    /*Εδώ ορίοθετούμε την maximum τιμή, που μπορεί να έχει το αθροίσμα μας(sum=1000)*/
    cout<<endl<<"Μπορείς σε αυτό το πρόγραμμάτακι να βρείς το αθροίσμα όλων των αριθμών, με maximum τιμή";
    cout<<endl;
    cout<<endl<<"Αν το αθροίσμα τον αριθμών που είσαγεις είναι, ένας αριθμός μεγαλύτερος του 1000, ο αθροίστης σταματάει";
    cout<<endl;
    while(sum<=1000)
    {
        cout<<endl<<"Δώσε μου μία τιμή"<<endl;
        cout<<"-->";
        cin>>value;
        /*ΠΡΩΤΗ ΦΟΡΑ-Πάμε να δούμε λίγο την λόγικη, ξεκινάει η ρόη(το πρόγραμμα).Το value έχει τιμή 0, συναντάει τον έλεγχό της while
        όπου 0<1000 όποτε μπαίνει μέσα στην δόμη της while.Εφόσον μπαίνει μέσα στην δομή της while, συναντάει την 
        cout<<endl<<"Δώσε μου μία τιμή"; και ακόλουθεί η cin>>value.Οπότε εισάγουμε μια τιμή ως χρήστες, έστω ότι εισάγουμε την τιμή 
        5, όποτε πλέον το value=5.Συναντάμε το sum το οποίο μέχρι στιγμής είχε τιμή 0 και πλέον γίνεται sum=0+5 όποτε το sum=5.Η δομή
        Επανάληψης της While θα επαναλήφθει έως ότου το value που θα δώσει ο χρήστης θα είναι ένας αριθμός μεγαλύτερος  του 1000*/
        /*ΔΕΥΤΕΡΗ ΦΟΡΑ- Το value έχει πλέον τιμή 5, συναντάει τον έλεγχό της while
        όπου 5<1000 όποτε μπαίνει μέσα στην δόμη της while.Εφόσον μπαίνει μέσα στην δομή της while, συναντάει την 
        cout<<endl<<"Δώσε μου μία τιμή"; και ακόλουθεί η cin>>value.Οπότε εισάγουμε μια τιμή ως χρήστες, έστω ότι εισάγουμε την τιμή 
        12, όποτε πλέον το value=12.Συναντάμε το sum το οποίο μέχρι στιγμής είχε τιμή 5 και πλέον γίνεται sum=5+12 όποτε το sum=17*/
        cout<<endl<<"Οι αριθμοί που αθρίζονται είναι το o αριθμός που εισηγάγες : "<<value<<"+ ο υπάρχων αριθμός :"<<sum;
        sum=sum+value;
        /*αν ο χρήστης είσαγε μία τιμή 1000 και μία άλλη τιμή 100 θα εμφανιστεί το αποτέλεσμα 1100 απλά θα στάματήσει το πρόγραμμα σε
        αυτό το σήμειο*/
        cout<<endl<<"Το αθροίσμα σου μέχρι στιγμής είναι="<<sum;
    }
    cout<<endl<<"Το αθροίσμα ξέπερασε την τιμή των 1000 για αυτό σταμάτησε η ροή του πρόγραμμάτος";
return 0;
}

/******************************************************************************
This program has an integer as an input data from the user and summarizes the digits of the number.
For example-->If the user gives us a number 45 the sum of the digits will be 4+5=9.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int number,ekatontades,dekades,monades,upoloipo_arhiko,sum=0;
    /*ορίζουμε ένα όριο στον χρήστη, δίοτι δεν γίνεται ο χρήστης να είσαγει έναν αριθμό που να αγγίζει το απέιρο.Τουλάχιστον
    όχι στα πλαίσια αυτής της άσκησης. Εστώ το μέγιστο όριο είναι ο αριθμός που μπορεί να δώσει ο χρήστης είναι ο αριθμός 999
    έστω οτι ο χρήστης μας δίνει τον αριθμό 293. Για να βρούμε τα ψήφια του αριθμού, μίας και ο μάξιμουμ αριθμός που μπορεί να 
    είσαγει ο χρήστης είναι ο αριθμός 999. Λέμε 293%100=θα μας δόθει ο αριθμός 93, γιατι θα εμφανίστει αυτός ο αριθμός; δίοτι
    το 100 <<χωράει>>στο 293 2 φο΄ρες όποτε 293-200=93(που είναι το υπόλοιπο του.Με το % μπορούμε να βρούμε μόνο το υπολοιπό της διαίρεσης
    εφ΄όσον το κάνουμε αυτό,λέμε 293/100 όπου με αυτον τον τρόπο παίρνουμε το πηλίκο,δήλαδή τον αρίθμο 2.Πα΄ρνουμε το υπολοπό πλέον και το 
    διαιρούμε ακόμα μία φορά με το 93%10 και παίρνουμε το νέο υπόλοιπο και με το 93/10 παιρνουμέ το νέο πηλίκο*/
    cout<<"Δώσε μου έναν αριθμό, ο μέγιστός επιτρεπόμενος αριθμός που μπορείς να μου δώσεις είναι το 999";
    while(number<1000)
    {
      cout<<endl;
      cin>>number;
      cout<<endl;
      cout<<"Ο αριθμός που μου έδωσες είναι="<<number;
      ekatontades=number/100;
      cout<<"οι εκάτοντάδες του αριθμού που μου έδωσες είναι="<<ekatontades;
      upoloipo_arhiko=number%100;
      dekades=upoloipo_arhiko/10;
      cout<<endl<<"οι δεκάδες του αριθμού που μου έδωσες είναι="<<dekades;
      cout<<endl;
      monades=upoloipo_arhiko%10;
      cout<<endl;
      cout<<endl<<"οι μονάδες του αριθμού που μου έδωσες είναι="<<monades;
      cout<<endl;
      sum=(ekatontades+dekades+monades);
      cout<<endl;
      cout<<"Το αθροίσμα των ψηφίων του αριθμού μου μου έδωσες είναι="<<sum;
      }
    cout<<endl<<"Ο αριθμός που εισήγαγες είναι μεγαλύτερος του 999.Για αυτό τερματίστηκε το πρόγραμμα";
 return 0;
}
