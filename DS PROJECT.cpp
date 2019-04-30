#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<string>
#include<WINDOWS.H>
using namespace std;
void printOccurrences(string ,string );

class Blood_Group
{
	string group,anti_body,antigen;
	public:
		Blood_Group()
		{
			group = "";
			anti_body = "";
			antigen = "";
		}
		Display();
		Phenotype_Inheritance();
};
class A : public Blood_Group
{
	public:
		Display()
		{
			cout << endl << " Blood Group = A";
			cout << endl << " Anti bodies in Plasma = Anti-B";
			cout << endl << " Antigen in Red Blood Cell = A";
		}
		Phenotype_Inheritance()
		{
			string c;
			cout << endl << "Enter Partener's Blood Group :";
			cin >> c;
			if(c == "O" || c == "o")
			{
				cout << endl << " Offspring inherits Blood Group = O or A";
			}
			else if(c == "A" || c == "a")
			{
				cout << endl << " Offspring inherits Blood Group = O or A";				
			}
			else if(c == "B" || c == "b")
			{
				cout << endl << " Offspring inherits Blood Group = O,A,B or AB";				
			}
			else if(c == "AB" || c == "ab")
			{
				cout << endl << " Offspring inherits Blood Group = A,B or AB";				
			}
			else
			{
				cout << endl << "Invalid Blood Group!";
			}
			
		}
};
class B : public Blood_Group
{
	public:
		Display()
		{
			cout << endl << " Blood Group = B";
			cout << endl << " Anti bodies in Plasma = Anti-A";
			cout << endl << " Antigen in Red Blood Cell = B";
		}
		Phenotype_Inheritance()
		{
			string c;
			cout << endl << "Enter Partener's Blood Group :";
			cin >> c;
			if(c == "O" || c == "o")
			{
				cout << endl << " Offspring inherits Blood Group = O or B";				
			}
			else if(c == "A" || c == "a")
			{
				cout << endl << " Offspring inherits Blood Group = O,A,B or AB";				
			}
			else if(c == "B" || c == "b")
			{
				cout << endl << " Offspring inherits Blood Group = O or B";				
			}
			else if(c == "AB" || c == "ab")
			{
				cout << endl << " Offspring inherits Blood Group = A,B or AB";				
			}
			else
			{
				cout << endl << "Invalid Blood Group!";
			}
		}
};
class AB : public Blood_Group
{
	public:
		Display()
		{
				HANDLE hConsole;
 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 {
	SetConsoleTextAttribute(hConsole, 13);
			cout << endl << " Blood Group = AB";
			cout << endl << " Anti bodies in Plasma = NONE";
			cout << endl << " Antigen in Red Blood Cell = A and B";
		}
	}
		Phenotype_Inheritance()
		{
			string c;
			cout << endl << "Enter Partener's Blood Group :";
			cin >> c;
			if(c == "O" || c == "o")
			{
				cout << endl << " Offspring inherits Blood Group = A or B";				
			}
			else if(c == "A" || c == "a")
			{
				cout << endl << " Offspring inherits Blood Group = A,B or AB";				
			}
			else if(c == "B" || c == "b")
			{
				cout << endl << " Offspring inherits Blood Group = A,B or AB";				
			}
			else if(c == "AB" || c == "ab")
			{
				cout << endl << " Offspring inherits Blood Group = A,B or AB";				
			}
			else
			{
				cout << endl << "Invalid Blood Group!";
			}
		}
};
class O : public Blood_Group
{
	public:
		Display()
		{
				HANDLE hConsole;
 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 {
	SetConsoleTextAttribute(hConsole, 13);
			cout << endl << " Blood Group = O";
			cout << endl << " Anti bodies in Plasma = Anti-A and Anti-B";
			cout << endl << " Antigen in Red Blood Cell = NONE";
		}}
		Phenotype_Inheritance()
		{
			string c;
			cout << endl << "Enter Partener's Blood Group :";
			cin >> c;
			if(c == "O" || c == "o")
			{
				cout << endl << " Offspring inherits Blood Group = O";
			}
			else if(c == "A" || c == "a")
			{
				cout << endl << " Offspring inherits Blood Group = O or A";
			}
			else if(c == "B" || c == "b")
			{
				cout << endl << " Offspring inherits Blood Group = O or B";
			}
			else if(c == "AB" || c == "ab")
			{
				cout << endl << " Offspring inherits Blood Group = A or B";				
			}
			else
			{
				cout << endl << "Invalid Blood Group!";
			}
		}
};
void Blood_Group_Analysis()
{
	cout << endl << "\t\t ** HUMAN BLOOD GROUP ANALYSIS ** \t "<<endl;
	
	A obj1;
	obj1.Display();
	cout << endl;
	obj1.Phenotype_Inheritance();
    cout << endl;
    
	AB obj2;
	obj2.Display();
    cout << endl;
	obj2.Phenotype_Inheritance();
    cout << endl;
    
	O obj3;
	obj3.Display();
    cout << endl;
	obj3.Phenotype_Inheritance();
    cout << endl;
    
	B obj4;
	obj4.Display();
    cout << endl;
	obj4.Phenotype_Inheritance();
    cout << endl;
}
void OCCURANCE(const string& str, const string& sub)
{
    if(sub.length() == 0) 
	return ;
    int count = 0;
    for(size_t offset = str.find(sub);
	offset != string::npos;
	offset = str.find(sub, offset + sub.length()))
    {
        ++count;
    }
    cout<<count;
    return;
}

# define NO_OF_CHARS 256 

int max (int a, int b) { return (a > b)? a: b; } 

void badCharHeuristic( string str, int size,  
                        int badchar[NO_OF_CHARS]) 
{ 
    int i; 
	int z = sizeof(str)/16;
    for (i = 0; i < NO_OF_CHARS; i++) 
         badchar[i] = -1; 

    for (i = 0; i < size; i++) 
         badchar[z]= i; 
} 

void Search(string txt,  string pat) 
{ 
    int m =2; 
    int n = 16; 
  
    int badchar[NO_OF_CHARS]; 

    badCharHeuristic(pat, m, badchar); 
  
    int s = 0;  
               
    while(s <= (n - m)) 
    { 
        int j = m-1; 

        while(j >= 0 && pat[j] == txt[s+j]) 
            j--; 

        if (j < 0) 
        { 
            cout << endl<<" pattern occurs at shift = "<< s; 

            s += (s+m < n)? m-badchar[txt[s+m]] : 1; 
  
        } 
  
        else

            s += max(1, j - badchar[txt[s+j]]); 
    } 
} 

void HZS_AA()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "AA"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "AA"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "AA"); 
    }
    myfile.close();                         
  }
  
}

void SSABS_AA()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "AA");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "AA");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "AA");
    }
    myfile.close();                         
  }
  
}

void FJS_AA()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "AA");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "AA");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "AA");
    }
    myfile.close();                         
  }}
  

void HZS_AC()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "AC"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "AC"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "AC"); 
    }
    myfile.close();                         
  }
  
}

void SSABS_AC()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "AC");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "AC");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "AC"); 
    }
    myfile.close();                         
  }
}
void FJS_AC()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "AC");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "AC");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "AC");
    }
    myfile.close();                         
  }}
  

void HZS_AT()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "AT"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "AT"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "AT"); 
    }
    myfile.close();                         
  }
  
}

void SSABS_AT()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "AT");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "AT");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "AT"); 
    }
    myfile.close();                         
  }
  
}

void FJS_AT()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "AT");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "AT");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "AT");
    }
    myfile.close();                         
  }}
  
  
void HZS_AG()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "AG"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "AG"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "AG"); 
    }
    myfile.close();                         
  }
  
}
void SSABS_AG()
{	
 string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "AG");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "AG");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "AG"); 
    }
    myfile.close();                         
  }
}

void FJS_AG()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "AG");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "AG");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "AG");
    }
    myfile.close();                         
  }}
  
  
void HZS_CA()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "CA"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "CA"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "CA"); 
    }
    myfile.close();                         
  }
  
}
void SSABS_CA()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "CA");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "CA");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "CA"); 
    }
    myfile.close();                         
  }
}

void FJS_CA()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "CA");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "CA");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "CA");
    }
    myfile.close();                         
  }}
  

void HZS_CC()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "CC"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "CC"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "CC"); 
    }
    myfile.close();                         
  }
  
}
void SSABS_CC()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "CC");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "CC");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "CC"); 
    }
    myfile.close();                         
  }
}
void FJS_CC()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "CC");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "CC");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "CC");
    }
    myfile.close();                         
  }}
  
void HZS_CT()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "CT"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "CT"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "CT"); 
    }
    myfile.close();                         
  }
  
}
void SSABS_CT()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "CT");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "CT");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "CT"); 
    }
    myfile.close();                         
  }
}
void FJS_CT()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "CT");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "CT");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "CT");
    }
    myfile.close();                         
  }}
  
void HZS_CG()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "CG"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "CG"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "CG"); 
    }
    myfile.close();                         
  }
  
}
void SSABS_CG()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "CG");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "CG");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "CG"); 
    }
    myfile.close();                         
  }
}
void FJS_CG()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "CG");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "CG");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "CG");
    }
    myfile.close();                         
  }}
  
void HZS_TA()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "TA"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "TA"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "TA"); 
    }
    myfile.close();                         
  }
  
}
void SSABS_TA()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "TA");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "TA");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "TA"); 
    }
    myfile.close();                         
  }
}
void FJS_TA()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "TA");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "TA");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "TA");
    }
    myfile.close();                         
  }}
  
void HZS_TC()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "TC"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "TC"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "TC"); 
    }
    myfile.close();                         
  }
  
}
void SSABS_TC()
{	
 string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "TC");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "TC");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "TC"); 
    }
    myfile.close();                         
  }
}
void FJS_TC()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "TC");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "TC");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "TC");
    }
    myfile.close();                         
  }}
  
void HZS_TT()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "TT"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "TT"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "TT"); 
    }
    myfile.close();                         
  }
  
}
void SSABS_TT()
{	
 string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "TT");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "TT");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "TT"); 
    }
    myfile.close();                         
  }
}
void FJS_TT()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "TT");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "TT");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "TT");
    }
    myfile.close();                         
  }}
  
void HZS_TG()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "TG"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "TG"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "TG"); 
    }
    myfile.close();                         
  }
  
}
void SSABS_TG()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "TG");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "TG");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "TG"); 
    }
    myfile.close();                         
  }
}
void FJS_TG()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "TG");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "TG");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "TG");
    }
    myfile.close();                         
  }}
  
void HZS_GA()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "GA"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "GA"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "GA"); 
    }
    myfile.close();                         
  }
  
}

void SSABS_GA()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "GA");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "GA");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "GA"); 
    }
    myfile.close();                         
  }
}
void FJS_GA()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "GA");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "GA");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "GA");
    }
    myfile.close();                         
  }}
  
void HZS_GC()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "GC"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "GC"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "GC"); 
    }
    myfile.close();                         
  }
  
}
void SSABS_GC()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "GC");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "GC");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "GC"); 
    }
    myfile.close();                         
  }
}
void FJS_GC()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "GC");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "GC");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "GC");
    }
    myfile.close();                         
  }}
  
void HZS_GT()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "GT"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "GT"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "GT"); 
    }
    myfile.close();                         
  }
  
}
void SSABS_GT()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "GT");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "GT");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "GT"); 
    }
    myfile.close();                         
  }
}
void FJS_GT()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "GT");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "GT");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "GT");
    }
    myfile.close();                         
  }}
  
void HZS_GG()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "GG"); 
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "GG"); 

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "GG"); 
    }
    myfile.close();                         
  }
  
}
void SSABS_GG()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    printOccurrences(line, "GG");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	printOccurrences(line, "GG");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	printOccurrences(line, "GG"); 
    }
    myfile.close();                         
  }
}
void FJS_GG()
{	
  string array[5];                                                       
  string line;                              
  ifstream myfile ;
  myfile.open("DNA.txt");          
  if (myfile.is_open())                     
  {
    while (!myfile.eof() )                
    {
    	getline (myfile,line);                
    	cout << line <<  endl;
	    Search(line, "GG");
      
    	for (int i=0; i<5;i++)         
    	{
    	array[i]=line;
    	Search(line, "GG");

    	}
        for (int j=0; j<5;j++)      
    	{
    	cout << array[j] <<" ";                   
    	}
    	Search(line, "GG");
    }
    myfile.close();                         
  }}
  
void DISPLAY_DNA()
{
		HANDLE hConsole;
 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 {
	SetConsoleTextAttribute(hConsole, 15);
string array[5];                        
  short loop;                               
  short loop2;                              
  string line;                              
  ifstream myfile ("DNA.txt");         
  if (myfile.is_open())                    
  {
    while (! myfile.eof() )               
    {
      getline (myfile,line);                
      cout << line <<  endl;               
        for (loop=0; loop<5;loop++)         
      {
      array[loop]=line;                     
      };
        for (loop2=0; loop2<5;loop2++)     
      {
      cout << array[loop2]<< " ";                    
      };
    }
    myfile.close();                         
  }
}
}
  void printOccurrences(string txt,string pat) 
{ 
    int found = txt.find(pat); 
    while (found != string::npos) 
	{ 
        cout << "Pattern found at index " << found << endl; 
        found = txt.find(pat, found + 1); 
    } 
}
void printChar(char ch,int n)
{
    while(n--)
    {
        putchar(ch);
    }
}
void printHead()
{ system("cls");

cout<<"\n\n\t";
printChar('=',20);
cout<<"BIOTECHNOLOGY MEETS COMPUTER SCIENTISTS";
printChar('=',20);
cout<<"\n";
}

void Pattern_Matching()
{
		HANDLE hConsole;
 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 {
	SetConsoleTextAttribute(hConsole, 7);
	int input;
	do{

cout<<"PRESS ENTER TO CONTINUE "<<endl;
cout<<"1. CHECK PATTERN --> AA\n";
cout<<"2. CHECK PATTERN --> AC\n";
cout<<"3. CHECK PATTERN --> AT\n";
cout<<"4. CHECK PATTERN --> AG\n";
cout<<"5. CHECK PATTERN --> CA\n";
cout<<"6. CHECK PATTERN --> CC\n";
cout<<"7. CHECK PATTERN --> CT\n";
cout<<"8. CHECK PATTERN --> CG\n";
cout<<"9. CHECK PATTERN --> TA\n";
cout<<"10.CHECK PATTERN --> TC\n";
cout<<"11.CHECK PATTERN --> TT\n";
cout<<"12.CHECK PATTERN --> TG\n";
cout<<"13.CHECK PATTERN --> GA\n";
cout<<"14.CHECK PATTERN --> GC\n";
cout<<"15.CHECK PATTERN --> GT\n";
cout<<"16.CHECK PATTERN --> GG\n";
cout<<"17.BACK TO MENU\n";
cout<<"\n\nSelection: ";
  int i;
  cin>> input;
  switch ( input ) {
  
  case 1:
  cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n";  
  cin>>i;
  if(i==1)
  HZS_AA();
  else if(i==2)
  SSABS_AA();
  else if(i==3)
  FJS_AA();         
    break;
  case 2:            
      cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n"; 
  cin>>i;
  if(i==1)
  HZS_AC();
  else if(i==2)
  SSABS_AC();
  else if(i==3)
  FJS_AC(); 
    break;
  case 3:            
      cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n"; 
  cin>>i;
  if(i==1)
  HZS_AT();
  else if(i==2)
  SSABS_AT();
  else if(i==3)
  FJS_AT(); 
    break;
  case 4:            
      cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n"; 
  cin>>i;
  if(i==1)
  HZS_AG();
  else if(i==2)
  SSABS_AG();
  else if(i==3)
  FJS_AG(); 
    break;
  case 5:            
     cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n"; 
  cin>>i;
  if(i==1)
  HZS_CA();
  else if(i==2)
  SSABS_CA();
  else if(i==3)
  FJS_CA(); 
    break;
  case 6:            
     cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n";  
  cin>>i;
  if(i==1)
  HZS_CC();
  else if(i==2)
  SSABS_CC();
  else if(i==3)
  FJS_CC();
    break;
  case 7:            
      cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n";  
  cin>>i;
  if(i==1)
  HZS_CT();
  else if(i==2)
  SSABS_CT();
  else if(i==3)
  FJS_CT(); 
    break;
  case 8:            
      cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n";  
  cin>>i;
  if(i==1)
  HZS_CG();
  else if(i==2)
  SSABS_CG();
  else if(i==3)
  FJS_CG();
    break;
  case 9:            
      cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n"; 
  cin>>i;
  if(i==1)
  HZS_TA();
  else if(i==2)
  SSABS_TA();
  else if(i==3)
  FJS_TA();  
    break;
  case 10:            
      cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n";  
  cin>>i;
  if(i==1)
  HZS_TC();
  else if(i==2)
  SSABS_TC();
  else if(i==3)
  FJS_TC();  
    break;
  case 11:            
      cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n"; 
  cin>>i;
  if(i==1)
  HZS_TT();
  else if(i==2)
  SSABS_TT();
  else if(i==3)
  FJS_TT();
    break;
  case 12:            
      cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n";  
  cin>>i;
  if(i==1)
  HZS_TG();
  else if(i==2)
  SSABS_TG();
  else if(i==3)
  FJS_TG();  
    break;
  case 13:            
     cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n"; 
  cin>>i;
  if(i==1)
  HZS_GA();
  else if(i==2)
  SSABS_GA();
  else if(i==3)
  FJS_GA(); 
    break;
  case 14:            
      cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n"; 
  cin>>i;
  if(i==1)
  HZS_GC();
  else if(i==2)
  SSABS_GC();
  else if(i==3)
  FJS_GC(); 
    break;
  case 15:            
      cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n";  
  cin>>i;
  if(i==1)
  HZS_GT();
  else if(i==2)
  SSABS_GT();
  else if(i==3)
  FJS_GT(); 
    break;
  case 16:            
     cout<<"Choose Any Algorithm to Proceed ... \n";
  cout<<"1. HZS ALGORITHM OF DNA SEQUENCE \n";
  cout<<"2. SSABS ALGORITHM OF DNA SEQUENCE \n"; 
  cout<<"3. FJS ALGORITHM OF DNA SEQUENCE \n"; 
  cin>>i;
  if(i==1)
  HZS_GG();
  else if(i==2)
  SSABS_GG();
  else if(i==3)
  FJS_GG(); 
    break;
case 17:
	return;
  default:            
    cout<<"quitting ! THANKS \n";
    break;
  }
}
  while(input!=0);
}}
void PRINTTOccurrences(string txt, string pat) 
{ 
    int found = txt.find(pat); 
    cout<<"DNA SEQ IS : "<<txt<<endl;
    while (found != string::npos) { 
        cout <<"Pattern " << pat <<  " found at index " << found << endl<<endl; 
        found = txt.find(pat, found + 1); 
    }
} 
  
void Mutation_Analysis()
{
	HANDLE hConsole;
 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 {
	SetConsoleTextAttribute(hConsole, 10);
    string txt0 = "ACAGCGAGCATATGCA", pat0 = "AC";
	PRINTTOccurrences(txt0, pat0);
    string txt1 = "ACAAGATGCCATTGTC", pat1 = "AC";
	PRINTTOccurrences(txt1, pat1);
	int MF=0-0;
	cout<<" MUTATION FACTOR = DNA SEQ 1 INDEX - DNA SEQ 2 INDEX \n => "<<MF;
	cout<<"\n\n*****************************************************************\n\n";
    string txt2 = "CATATGCAGGAAGCGG", pat2 = "CA";
	PRINTTOccurrences(txt2, pat2);
    string txt3 = "CCAGCAATCCGCGCGC", pat3 = "CA";
	PRINTTOccurrences(txt3, pat3);
	 MF=2-1;
	cout<<" MUTATION FACTOR = DNA SEQ 1 INDEX - DNA SEQ 2 INDEX \n => "<<MF;
	cout<<"\n\nMUTATION OCCURRED (MF>0)";
	cout<<"\n\n*****************************************************************\n\n";
	string txt4 = "GTGGAAGTTCTTAGGG", pat4 = "GT";
	PRINTTOccurrences(txt4, pat4);
    string txt5 = "GCCGGGTCCCTCATAC", pat5 = "GT";
	PRINTTOccurrences(txt5, pat5);
	 MF=6-1;
	cout<<" MUTATION FACTOR = DNA SEQ 1 INDEX - DNA SEQ 2 INDEX \n => "<<MF;
	cout<<"\n\nMUTATION OCCURRED (MF>0)";
	cout<<"\n\n*****************************************************************\n\n";
	string txt6 = "TCCTGCTGCTGCTGCT", pat6 = "TG";
	PRINTTOccurrences(txt6, pat6);
    string txt7 = "TGGACCTCCCAGGCCA", pat7 = "TG";
	PRINTTOccurrences(txt7, pat7);
    MF=3-0;
	cout<<" MUTATION FACTOR = DNA SEQ 1 INDEX - DNA SEQ 2 INDEX \n => "<<MF;
	cout<<"\n\nMUTATION OCCURRED (MF>0)";
	cout<<"\n\n*****************************************************************\n\n";
    return ; 
} 
}

int countFreq(string &pat, string &txt) 
{ 
    int M = pat.length(); 
    int N = txt.length(); 
    int res = 0; 
    
    for (int i = 0; i <= N - M; i++) 
    {  
        int j; 
        for (j = 0; j < M; j++)
        {
            if (txt[i+j] != pat[j])
            {
                break; 
			}
		}
        if (j == M)   
        { 
           res++; 
           j = 0; 
        } 
    } 
    return res; 
} 

void Amino_Acid_Detection()
{
		HANDLE hConsole;
 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 {
	SetConsoleTextAttribute(hConsole, 11);
	cout << endl << "\t\t\t **** AMINO ACID DETECTION **** \t"<<endl;
	string str= "AGAACGCAGAGACAAGGTTCTCATTGTGTCTCGCAATAGTGTTACCAACTCGGGTGCCTATTGGCCTCCAAAAAAGGCTGTTCAACGCTCCAAGCTCGTGACCTCGTCACTACGACG GCGAGTAAGAACGCCGAGAAGGTAAGGGAACTAATGAC GCGTGGTGAATCCTATGGGTTAGGATCGTGTCTACCCCA AATTCTTAATAAAAAACCTAGGACCCCCTTCGACCTAGA CTATCGTATTATGGACAAGCTTTAACTGTCGTACTGTGGA GGCTTCAAAACGGAGGGACCAAAAAATTTGCTTCTAGCG TCAATGAAAAGAAGTCGGGTGTATGCCCCAATTCCTTGC TGCCCGGACGGCCAGTTCATAATGGGACACAACGAATCG CGGCCGGATATCACATCTGCTCCTGTGATGGAATTGCTG AATGCGCAGGTGTGCTTATGTACAATCCACGCGGTACTA CATCTTGTCTCTTATGTAGGGTTCAGTTCTTCGCGCAATC ATAGCGGTACGAATACTGCGGCTCCATTCGTTTTGCCGTG TTGATCGGGAATGCACCTCGGGGACTGTTCGATACGACC TGGGATTTGGCTATACTCCATTCCTCGCGAGTTTTCGATT GCTCATTAGGCTTTGCGGTAAGTAAGTTCTGGCCACCCA CTTCGAGAAGTGAATGGCTGGCTCCTGAGCGCGTCCTCC GTACAATGAAGACCGGTCTCGCGCTAAATTTCCCCCAGC TTGTACAATAGTCCAGTTTATTATCAAAGATGCGACAAA TAAATTGATCAGCATAATCGAAGATTGCGGAGCATAAGT TTGGAAAACTGGGAGGTTGCCAGAAAACTCCGCGCCTAC TTTCGTCAGGATGATTAAGAGTATCGAGGCCCCGCCGTC AATACCGATGTTCTTCGAGCGAATAAGTACTGCTATTTTG CAGACCCTTTGCCAGGCCTTGTCTAAAGGTATGTTACTTA ATATTGACAATACATGCGTATGGCCTTTTCCGGTTAACTC CCTG"; 
	cout << endl <<str<<endl;
	string c; 
	int value=0,opt=0,num=0;
	do
	{
		cout<<endl<<"SELECT OPTION TO CONTINUE "<<endl;
		cout<<"0. EXIT\n";
		cout<<"1. GCT\n";
		cout<<"2. CGT\n";
		cout<<"3. TGT\n";
		cout<<"4. GAG\n";
		cout<<"5. CAT\n";
		cout<<"6. TTA\n";
		cout<<"7. CCA\n";
		cout<<"8. ACT\n";
		cout<<"9. TAC\n";
		cout<<"10. GTC\n";
		cin >> opt;
		switch(opt)
		{
			case 0:
				cout << endl << "Exited Sucessfully!";
				break;
			case 1:
				c = "GCT"; 
    			value = countFreq(c, str);
    			num = value/4;
    			cout << endl << " "<<num << " ALANINE present!"<<endl;
    		break;
    		case 2:
				c = "CGT"; 
    			value = countFreq(c, str);
    			num = value/4;
    			cout << endl <<" "<< num << " ARGININE present!"<<endl;
    		break;
    		case 3:
				c = "TGT"; 
    			value = countFreq(c, str);
    			num = value/4;
    			cout << endl << " "<<num << " CYSTEINE present!"<<endl;
    		break;
    		case 4:
				c = "GAG"; 
    			value = countFreq(c, str);
    			num = value/6;
    			cout << endl <<" "<< num << " GLUTAMIC ACID present!"<<endl;
    		break;
    		case 5:
				c = "CAT"; 
    			value = countFreq(c, str);
    			num = value/4;
    			cout << endl <<" "<< num << " HISTIDINE present!"<<endl;
    		break;
    		case 6:
				c = "TTA"; 
    			value = countFreq(c, str);
    			num = value/4;
    			cout << endl << " "<<num << " LEUCINE present!"<<endl;
    		break;
    		case 7:
				c = "CCA"; 
    			value = countFreq(c, str);
    			num = value/4;
    			cout << endl << " "<<num << " PROLINE present!"<<endl;
    		break;
    		case 8:
				c = "ACT"; 
    			value = countFreq(c, str);
    			num = value/4;
    			cout << endl << " "<<num << " THREONINE present!"<<endl;
    		break;
    		case 9:
				c = "TAC"; 
    			value = countFreq(c, str);
    			num = value/4;
    			cout << endl <<" "<< num << " TYROSINE present!"<<endl;
    		break;
			case 10:
				c = "GTC"; 
    			value = countFreq(c, str);
    			num = value/4;
    			cout << endl <<" "<< num << " VALINE present!"<<endl;
    		break;
    		default:
    			cout << endl << "Invalid choice!";
		}
	}while(opt!=0);
}
} 

void printUpperHalf(string str) 
{ 
    char first, second; 
    int pos = 0; 

    for (int i = 1; i <= 4; i++) { 
  
        first = str[pos]; 
        second = str[pos + 1]; 
        pos += 2; 
          
        for (int j = 4 - i; j >= 1; j--) 
            cout << " "; 
        cout << first; 
        for (int j = 1; j < i; j++) 
            cout << "--"; 
        cout << second << endl; 
    } 
} 
 
void printLowerHalf(string str) 
{ 
    char first, second; 
    int pos = 0; 
    for (int i = 1; i <= 4; i++) { 
  
        first = str[pos]; 
        second = str[pos + 1]; 
        pos += 2; 
          
        for (int j = 1; j < i; j++) 
            cout << " "; 
        cout << first; 
        for (int j = 4 - i; j >= 1; j--) 
            cout << "--"; 
        cout << second << endl; 
    } 
} 
 
void printDNA(string str[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
  
        int x = i % 6; 
 
        if (x % 2 == 0) 
            printUpperHalf(str[x]); 
        else

            printLowerHalf(str[x]); 
    } 
} 


int main()
{
	HANDLE hConsole;
 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 {
	SetConsoleTextAttribute(hConsole, 14);
	printHead();
	int n = 8; 

    string DNA[] = { "ATTAATTA", "TAGCTAGC", "CGCGATAT", 
                   "TAATATGC", "ATCGTACG", "CGTAGCAT" }; 
    printDNA(DNA, n);
    system("PAUSE");
    system("cls");
cout<<"\t \t----------------------------------------------------\n\n";
cout<<"\t \t \t ||GENETIC TESING|| \n\n";
cout<<"\t \t----------------------------------------------------\n\n";

cout<<" \n \n \n CREATED BY : \n";
cout<<" \n -------------------------------\n ";
cout<<"| HUSSAIN GHAZALI  | |17k-3900| \n | HASSAN SHAKEEL   | |17k-3857| \n | ZUHAIR WAHEED    | |17k-3706| \n | SHAYAN NOOR KHAN | |17k-3744|";
cout<<" \n ------------------------------- \n";
system("PAUSE");
int input;
system("cls");
system("PAUSE");
system("cls");
do{

cout<<"PRESS ENTER TO CONTINUE "<<endl;
cout<<"0. DISPLAY DNA SEQUENCE\n";
cout<<"1. EPMA (Efficient pattern matching algorithms)\n";
cout<<"2. Blood Group Analysis\n";
cout<<"3. Mutation Analysis (Dextool Mutate)\n";
cout<<"4. Amino acids Components Detection\n";
cout<<"5. EXIT";
cout<<"\n\nSelection: ";

  cin>> input;
  switch ( input ) {

  case 0:            
   DISPLAY_DNA();
    break;  
  case 1:            
    Pattern_Matching();
    break;
  case 2:            
    Blood_Group_Analysis();
    break;
  case 3:            
    Mutation_Analysis();
    break;
  case 4:            
    Amino_Acid_Detection();
    break;
 case 5:
 	cout<<"EXIT !!";
 	break;
  default:            
    cout<<"INVALID ENTRY \n";
    break;
  }
}
  while(input!=5);
  
}
return 0;
}
