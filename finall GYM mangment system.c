/*this program for gym mangment system created by YOUSEF MURAD YOUSEF RAYYAN ;ID NUMBER :1904010031
this program show you the main minue whitch have 5 deferant conten and firtly you add your information 
in the first case after that you can calculate you BMI and it will teel your resolt directly and in the 
third case you can see all the users and thire information (ID,NAME,GENDER,AGE,BMI,LEINGHT,WEIGHT,AND THE
YEAR OF YOUR REGSTRATION).In the forth case you can pick some schdule for your exersices depend on your gender 
if you are MALE it will shows you defrent levels of exersices and you just pick the right one for yourselfe and if
you are FEMALE you will see one ofe the best exersices for the women .finaly the fifth case its just to cloes the program */

/*!!!!!!!!!!!!!!THE MOST IMPORTANT NOTE THE PROGRAM WILL NOT WORK BECAUSE OF THE FILE THAT CREATE IT  !!!!!!!!!!!!!!!!!!!!
!!!!(C:\\Users\\ENVY\\Documents\\program.txt)!!!!*/
//you must creat a file in your docoment in c disck  ofter that just go to function names viewstaff(); and change it to your folder name//



#include<stdio.h>

#include<conio.h>

#include <stdlib.h>

#include<string.h>                 

#include<ctype.h>                   

#include<dos.h>                    
	
	char c;//this char just for openthe folder and make the while statment/
	char namemember[50];//used her the arrays for the name of members//
	char sex[50];//used her the arrays for the gender of members//
	char recordmember[50];
	char anther;//this char just for the if statment to make option to go 
	int ID[50];//used her the arrays for the ID of members//
	int regstrationDate[50];//used her the arrays for the regstrationData of members//
	
    int choice=0;//this varabel just for the switch case//
	int age[50];
	int flag=0;//this varabel just for the if statment in the char closeapplictaion() function to make a falst if the yousef PRESSED Y the flage varable will changes to 1 and the program will stoped// 
    float weight;
	float lenght;
	float BMI=0;
    int mainminu();//main minue function 
    char addstaff();//this function for adding members but its still have some problems
	float calculateIMB();//calculation the IMB and take from the user the wight and lenght 
    char viewstaff();// this function to show the members in the system and there is some probles with this function its just show one name 
    char recordstuff();//this function shows the memebrs schdule depend on the gender if male or female .
    char closeapplictaion();//function to close the program from main minue useing if statment 
    char recommendedex();//function for  men 4schdule
    char beginnerexmwen();//function for  men 1schdule
    char Advancedexmen();//function for  men 2schdule
    char Intermediateexmen();//function for  3men schdule
    char recordstufff();//function for women schdule
	FILE *fptr;
	
int main (){
	
	mainminu();
	
  
  	

	switch(choice){
		
		case 1:
		
		addstaff();
		
	 	break;
	 	
	    case 2:
	 
	    calculateIMB();
	    
	    break;
	    
	    
	    case 3:
	    	
	 	viewstaff();
	 	
	    break;
	 


	    case 4:
	    	
    	recordstuff();
    	
        break;
        
	    case 5:
	    	
    	closeapplictaion();
    	
        break;
     
     	 default:
	 	{
	 	    puts("\aWrong Entry!!Please re-entered correct option");
              
             
				return 	mainminu();//i make the return value to mainminu() other way it will go inv loop//
               break;     

		         }//end default
	 
     
     
	       }//end switch
     
     
     	return 0;
     
	  
     
	 }//end main
		
			


int mainminu(){
	
	

	
		

   
                          
     printf("\t\t\t\t\t\t\t\t\t\t\t\t\tWELCOME\n\t\t\t\t\t\t\t\t\t\t\t\t\t  To \n\t\t\t\t\t\t\t\t\t\t\t \xdb\xdb\xdb\xdb\xdb\xdb GYM Management System \xdb\xdb\xdb\xdb\xdb\xdb\n");
     printf("\t\t\t\t\t\t\t\t\t\t\t\t\tMAIN MENU \n ");

     printf("\t\t\t\t\t\t\t\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");



	 printf("\t\t\t\t\t\t\t\t\t\t\t\t<1> Add Members\n\t\t\t\t\t\t\t\t\t\t\t\t<2> Calculate BMI\n\t\t\t\t\t\t\t\t\t\t\t\t<3> View Member's list\n\t\t\t\t\t\t\t\t\t\t\t\t<4> Members Record \n\t\t\t\t\t\t\t\t\t\t\t\t<5> Close Application\n  Enter your choice:\n");
     scanf(" %d",&choice);

                       

	
   	return choice;
            	
   
        }//end main minue
   
   
   
        
        
float calculateIMB(){
	
	 printf("<6> Calculate BMI\n");
	 printf(" Enter the Information shown down below  \n ");
     printf(" Enter your weight in (KG) : \n ");
     scanf(" %f",&weight);
     printf(" Enter your lenght in (CM) : \n ");
     scanf("% f",&lenght);
     BMI=(float)weight/(lenght*lenght)*10000;
     if (BMI<18,5)
     {
     	printf(" Under weightT");
	 }
	  else if (BMI>=18,5&&BMI<24,9)
     {
     	printf(" Normal weight");
	 }
	  else if (BMI>25&&BMI<29,9)
     {
     	printf(" Over weight");
	 }
	  else
     {
     	printf(" Obesity");
	 }
		printf("\n DO you want to Try anther one (Y/N) :\n");
	 	scanf(" %s",&anther);
	 	if(anther=='Y'||anther=='y'){//if statment to creat  i option for user to press Y(which mean add anther memebr) OR N (whitch mean back manminue)/

	 		return  calculateIMB();
		 }//end of if statment
		 else{
		 	return main();
		 }//end of else
	
 return BMI;	
	
} //end  calculateIMB




char addstaff(){
	
       	printf(" Enter you ID number (It Must Be 10 Numbers) :\n");
       	scanf("%s",ID);
		printf(" Enter the full name :\n");
	 	scanf(" %s", namemember);
	 	printf(" Enter your sex :\n");
	 	scanf(" %s", sex);
	 	printf(" Enter your age:\n");
	 	scanf(" %s",age);
	 	printf(" Enter your weight in (KG) : \n ");
        scanf(" %f",&weight);
        printf(" Enter your lenght in (CM) : \n ");
        scanf("%f",&lenght);
        printf(" Enter your date regstration : \n");
        scanf("%s",regstrationDate);
        BMI=(float)weight/(lenght*lenght)*10000;
        
        fptr = fopen("C:\\Users\\ENVY\\Documents\\program.txt","a");//i creat and open  her a folder txt to save the members information .(append "a").
        fprintf(fptr,"\t\t%s\t\t%s\t\t%s\t\t%s\t\t%.2f\t\t%.2f(CM)\t\t%.2f(KG)\t\t%s\n",ID,namemember,sex,age,BMI,lenght,weight,regstrationDate);//showe the information of the memebers/
   		fclose(fptr);//close the folder .
        
	 	printf(" DO you want to add anther member (Y/N) :\n");//if statment to creat  i option for user to press Y(which mean add anther memebr) OR N (whitch mean back manminue)/
	 	scanf(" %s",&anther);
	 	if(anther=='Y'||anther=='y'){
	 		return  addstaff();
		 }//end of the if statment
		 else{
		 	return main();
		 }//end of else
	 	
	 	 
	 	
	
}    //end  addstaff 


char viewstaff(){
		//printf("\t\tName member\t\tSex\t\tAge\t\tBMI\t\tLength\t\tWeight\n");
		//printf("\t\t%s\t\t%s\t\t%d\t\t%.2f\t\t%.2f(CM)\t%.2f(KG)\n",namemember,sex,age,BMI,lenght,weight);
	
		fptr = fopen("C:\\Users\\ENVY\\Documents\\program.txt","r");//i used her this strution to read the file whitch i created to show the user the information that he sved // 
		
		   c = fgetc(fptr); 
    		while (c != EOF) 
    			{ 
        			printf ("%c", c); 
        			c = fgetc(fptr); 
    			}
   			fclose(fptr);

	 	printf(" DO you want to Add New Member ! (Y/N) :\n");
	 	scanf(" %s",&anther);//if statment to creat  i option for user to press Y(which mean viewonther member) OR N (whitch mean back manminue)/
	 	if(anther=='Y'||anther=='y'){
	 		return recordstuff()  ;
		 }//end of the if statment
		 else{
		 	return main();
		 }//end else
	
	
	
	
	
}//end viewstaff


char recordstuff(){
	printf("Please Enter you Gender (Male OR Female)\n");
	scanf(" %s",sex);// we dont use & becouse its shring.
	//we use her " " becouse its shring .
	
	if (strcmp(sex, "male") == 0){//creating a if statment to check the sring if its male or female /
	
		 printf("\t\t\t\t\t\t\t\t\t\t\t\t<1> beginner\n\t\t\t\t\t\t\t\t\t\t\t\t<2> Intermediate\n\t\t\t\t\t\t\t\t\t\t\t\t<3> Advanced\n\t\t\t\t\t\t\t\t\t\t\t\t<4> recommended exersices\n  Enter your choice:\n");
     scanf(" %d",&choice);
		
		switch(choice){
			case 1:
			beginnerexmwen();
			break;
			case 2:
		    Intermediateexmen();
			break;
			case 3:
			Advancedexmen();
			break;
			case 4:
			recommendedex();
			break;
				
			default :{
				 puts("\aWrong Entry!!Please re-entered correct option");

             recordstuff();
				
				break;
			          }//default
		}//switch case
	}//if statment for male
	
	
	 else if (strcmp(sex, "MALE") == 0) {//because we are compring the shrings whe should use the strcmp struction
	 	
	
		 printf("\t\t\t\t\t\t\t\t\t\t\t\t<1> beginner\n\t\t\t\t\t\t\t\t\t\t\t\t<2> Intermediate\n\t\t\t\t\t\t\t\t\t\t\t\t<3> Advanced\n\t\t\t\t\t\t\t\t\t\t\t\t<4> recommended exersices\n  Enter your choice:\n");
     scanf(" %d",&choice);
		
		switch(choice){
			case 1:
			beginnerexmwen();
			break;
			case 2:
		    Intermediateexmen();
			break;
			case 3:
			Advancedexmen();
			break;
			case 4:
			recommendedex();
			break;
				
			default :{
				 puts("\tWrong Entry!!Please re-entered correct option");

             recordstuff();
				
				break;
			          }//default
		}//switch case
	 
		
	}//else if statment for MALE
	else {
		 recordstufff();
	}//end of the else
	
	
	
     return 0;
	
}//end function







char closeapplictaion(){
	
	
	
	
		printf(" DO You Want To Close The Application !(Y/N) :\n");
	 	scanf(" %s",&anther);
	 	if(anther=='Y'||anther=='y'){// use the if statment to make the statment wrrong/
	 	flag=1;//by makeing the varible = to 1 //
		 }
		 else if(anther=='N'||anther=='n'){
		 return main();
	}//end of if statment/
	 
return 0;
	 }//end of function close the program//
		 
char recommendedex(){

		printf("THE Schedule Shows Below for MALE 4 Days A Week\n\n\n");
		printf("\t\tMonday(Upperbody) \t\tTusday(Lowerbody)\t\tThursday(Upperbody)\t\tFriday(Lowerbody)\n\n\n\n");
		
		printf("\t\tDumbell Bench Press:\t\tLeg Press:          \t\tChinups:           \t\tBody Weight Calf Raises:\n"); 
		printf("\t\t2 Sets Of 10-12     \t\t3 Sets Of 10-12     \t\t3 Sets Of 10-12    \t\t2 Sets Of 10-12 Reps\n\n"); 
		printf("\t\tButterfly:          \t\tLeg Extenstion:     \t\tSeated Cable Rows: \t\tStanding Calf Raises\n");
		printf("\t\t2 Sets Of 10-12     \t\t2 Sets Of 10-12     \t\t2 Sets Of 10-12    \t\t2 Sets Of 10-12 Reps\n\n"); 
		printf("\t\tMilitary Press:     \t\tStanding Leg Curls: \t\tLateral Paises:    \t\tStanding Leg Curls\n"); 
		printf("\t\t2 Sets Of 10-12     \t\t2 Sets Of 10-12     \t\t2 Sets Of 10-12    \t\t2 Sets Of 10-12 Reps\n\n");                                                                      
        printf("\t\tTricep Pushdowns:   \t\tLying Leg Curls:    \t\tEZ-Bas Curls:      \t\tLeg Press:\n"); 
        printf("\t\t2 Sets Of 10-12     \t\t2 Sets Of 10-12     \t\t2 Sets Of 10-12    \t\t2 Sets Of 10-12 Reps\n\n");
		printf("\t\tLying Triceps Press:\t\tStanding Calves Raises:\t\tHummer Curls:   \t\tHack Squats:\n"); 
		printf("\t\t2 Sets Of 10-12     \t\t2 Sets Of 10-12        \t\t2 Sets Of 10-12 \t\t2 Sets Of 10-12 Reps\n\n");
		printf("\t\tSide Lateral Raises:\t\tSeated Calves Raises:\t\tIncline Dumbbell Press:\t\tAb Crunch Machine:\n"); 
		printf("\t\t2 Sets Of 10-12     \t\t2 Sets Of 10-12      \t\t2 Sets Of 10-12        \t\t2 Sets Of 10-12 Reps\n\n");
		printf("\t\tPreaching Curls:    \t\tAb Crunch Machine:   \t\tCable Crossovers:  \t\tCrunches:\n"); 
		printf("\t\t2 Sets Of 10-12     \t\t2 Sets Of 10-12      \t\t3 Sets Of 10-12    \t\t3 Sets Of 15-20 Reps\n\n");
		printf("\t\tSeated Dumbell Curls:\t\tCrunches:           \t\tMilitary Press:    \t\t____________\n"); 
		printf("\t\t2 Sets Of 10-12     \t\t3 Sets Of 15-20      \t\t2 Sets Of 10-12    \t\t____________\n\n");
		printf("\t\tLat Pulldowns:      \t\t_____________________\t\tDips               \t\t____________\n");
		printf("\t\t2 Sets Of 10-12     \t\t_____________________\t\t2 Sets Of 10-12    \t\t____________\n\n");
		printf("\t\tOne Arm Dumbbell Rows:\t\t___________________\t\tRope Pushdowns:    \t\t____________\n");
		printf("\t\t2 Sets Of 10-12      \t\t____________________\t\t2 Sets Of 10-12    \t\t____________\n\n"); 
		printf("\t\tDumbbell Shrugs:     \t\t____________________\t\t___________________\t\t____________\n"); 	
	    printf("\t\t2 Sets Of 10-12      \t\t____________________\t\t___________________\t\t____________\n\n");
	    	 	printf(" DO you want to see anther exersices (Y/N) :\n");
	 	scanf(" %s",&anther);
	 	if(anther=='Y'||anther=='y'){//if statment to creat  i option for user to press Y(which mean see anther exersices) OR N (whitch mean back manminue)/
	 		return  recordstuff();
		 }//end of if statment/
		 else{
		 	return main();
		 }//end of else/
	
	}//end of function recomemnded exersices/
	
	
	
	 


char beginnerexmwen(){
    printf("\t\t\t\t\t\t\t\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Day 1: Chest, Back, Shoulders, Legs, Biceps, Triceps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Chest        Barbell Bench Press      4 sets of 8 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Back         Lat-pulldowns            4 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Shoulders    Seated Dumbbell Press    4 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Legs         Leg Extensions           4 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Biceps       Barbell Bbicep Curls     3 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Triceps      Triceps Rope Pushdowns   3 sets of 15 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Day 2: Legs, Triceps, Biceps, Chest, Back, Shoulder\n");
    printf("\t\t\t\t\t\t\t\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Legs         Leg Press Machine        4 sets of 8 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Triceps      Overhead Bar Extensions  3 sets of 20 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Biceps       EZ Bar Curls             4 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Chest        Machine Chest Press      4 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Back         T-Bar Row                4 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Shoulders    Lateral Raises           3 sets of 20 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Day 3: Shoulders, Back, Chest, Legs, Triceps, Biceps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Shoulders    EZ Bar Upright Rows      3 sets of 15 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Back         Close-Grip Pulldowns     4 sets of 12 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Chest        Cable Fly                4 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Legs         Lunges                   3 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Triceps      Skullcrushers            3 sets of 15 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Biceps       Hammer Curls             3 sets of 12 reps\n");
		 	printf(" DO you want to see anther exersices (Y/N) :\n");
	 	scanf(" %s",&anther);
	 	if(anther=='Y'||anther=='y'){//if statment to creat  i option for user to press Y(which mean see anther schdule) OR N (whitch mean back manminue)/
	 		return  recordstuff();
		 }//end of is statment 
		 else{
		 	return main();
		 }//end of else//
	
	return 0;
}//end of the function beegnier //		 
 char Advancedexmen(){

	printf("                                                                                             Day 1: Chest & Back\n\n");

 	printf("\t\tBarbell Bench Press                  Incline Dumbbell Press             Dips                            Pullups                   Pendlay Rows               Pulldowns \n");
 	printf("\t\tSet 1 at 50% – 1 set of 5 reps        3 sets of 6-8 reps                  3 sets of 6-10 reps             3 sets of 5-8 reps        3 sets of 6-10 reps        3 sets of 6-10 reps\n");
 	printf("\t\tSet 2 at 60% – 1 set of 5 reps\n");
 	printf("\t\tSet 3 at 70% – 1 set of 5 reps\n");
 	printf("\t\tSet 4 at 80% – 1 set of 5 reps\n");
 	printf("\t\tSet 5 at 90% – 1 set of 5 reps\n");
 	printf("\t\tSet 6 at 100% – 1 set of 5 reps\n\n\n");

 	printf("                                                                                               Day 2: Legs\n\n");

 	printf("\t\tSquats                               Leg Press                          Stiff-Legged Deadlift           Hamstring Curls           Calf-Raise                 _________ \n");
 	printf("\t\tSet 1 at 50% – 1 set of 5 reps       3 sets of 6-10 reps                  5 sets of 5 reps                3 sets of 6-8 reps        5 sets of 10 reps          __________\n");
 	printf("\t\tSet 2 at 60% – 1 set of 5 reps\n");
 	printf("\t\tSet 3 at 70% – 1 set of 5 reps\n");
 	printf("\t\tSet 4 at 80% – 1 set of 5 reps\n");
 	printf("\t\tSet 5 at 90% – 1 set of 5 reps\n");
 	printf("\t\tSet 6 at 100% – 1 set of 5 reps\n\n\n");
 
	printf("                                                                                               Day 3: Shoulders & Arms\n\n");
 
 	printf("\t\tMilitary Press or Dumbbell Press     Lateral Raises                     Barbell Curls                   Dumbbell Curls            __________                 __________ \n");
 	printf("\t\t3 sets of 6-8                        3 sets of 6-10 reps                5 sets of 5 reps                3 sets of 6-8 reps        5 sets of 10 reps          __________ \n\n\n");

	printf("                                                                                               Day 4: Rest\n\n");

	printf("          ---------------------------------------------------Its your rest day. Rest your muscle to prepare for the next round of training.-------------------------------------------------------\n\n\n");

    printf("                                                                                               Day 5: Chest, Shoulders, & Triceps\n\n");

 	printf("\t\tFlat Dumbbell Press                  Incline Dumbbell Press             Hammer Strength Press           Cable Flys                Lateral Raises             Reverse-Grip Pull-Downs  \n"); 
 	printf("\t\t5 sets of 20-6 (Pyramiding) reps     3 sets of 6-10 reps                3 sets of 10 reps               3 sets of 12-15 reps      5 sets of 15-20 reps       5 sets of 15-20 reps\n\n\n");

	printf("                                                                                               Day 6: Back & Biceps\n\n");

 	printf("\t\tBarbell Rows                         Barbell Shrugs                     Rack Deadlifts                  Pullups                   Pulldowns                  __________ \n"); 
 	printf("\t\t5 sets of 20-8 (Pyramiding) reps     3 sets of 15-20 reps               3 sets of 10-12 reps            3 sets of 6-10 reps       3 sets of 6-10 reps        __________ \n\n\n");
 	
    printf("                                                                                               Day 7: Legs\n\n");


 	printf("\t\tFront Squats                         Leg Extensions                     Hamstring Curls                Seated Calf Raise          Standing Calf Raise        __________ \n"); 
 	printf("\t\t5 sets of 20-8 (Pyramiding) reps     5 sets of 10 reps                  5 sets of 6-10 reps            5 sets of 6-10 reps        3 sets of 8-12 reps        ___________\n");


			 	printf(" DO you want to see anther exersices (Y/N) :\n");
	 	scanf(" %s",&anther);
	 	if(anther=='Y'||anther=='y'){//if statment to creat  i option for user to press Y(which mean see anther exsercises) OR N (whitch mean back manminue)/
	 		return  recordstuff();
		 }//end of if statment//
		 else{
		 	return main();
		 }//end of else//
		 return 0;
}//end of function advance //

char Intermediateexmen(){
    printf("\t\t\t\t\t\t\t\t\t\t    Day 1 : Chest, Shoulders and Triceps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Chest\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Dumbbell Bench Press           3 sets of 10, 10, 8 (adding weight) reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Incline Dumbbell Bench Press   3 sets of 10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Chest Dip                      3 sets of MAX reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Triceps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Skullcrushers                  3 sets of 8-10 Reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    One Arm Dumbbell Extension     3 sets of 10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Tricep Extension               3 sets of 10 reps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Shoulders\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Barbell Front Raise            4 sets of 12 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Dumbbell Lateral Raise         4 sets of 15, 12, 8, 8 (adding weight) reps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Day 2 : Back and Biceps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Wide Grip Pull Up              3 sets of MAX reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Lat Pull Down                  3 sets of 10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Straight Arm Lat Pull Down     3 sets of 10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Machine Reverse Fly            3 sets of 10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Upright Row                    3 sets of 8-10 reps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Biceps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Standing Barbell Curl          3 sets of 8-10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Preacher Curl                  3 sets of 10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Incline Dumbbell Curl          3 sets of 10 reps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Day 3: Legs\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Squat                          4 sets of 10,10,8,8 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Dumbbell Lunge                 3 sets of 8 on each leg\n");
    printf("\t\t\t\t\t\t\t\t\t\t    45 Degree Leg Press            3 sets of 12 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Leg Curl                        3 sets of 15 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Leg Extension                  3 sets of 15 reps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Calves\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Standing Calf Raise            5 sets of 10,8,8,8,6 (heavy)reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Seated Calf Raise              5 sets of 15 (light) reps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Day 4 : Shoulders, chest, and Triceps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Chest\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Barbell Bench Press            3 sets of 10, 10, 8 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Dumbbell Flys                  3 sets of 10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Cable Crossovers               3 sets of 10 reps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Triceps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Close Grip Bench Press         4 sets of 10, 10, 8, 6 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Lying Dumbbell Extension       3 sets of 10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Tricep Kickback                3 sets of 10 reps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Shoulders\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Seated Dumbbell Press          4 sets of 10, 10, 8, 8 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    One Arm Cable Lateral Raise    3 sets of 12 reps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Day 5 : Back and Bis\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Seated Row                     4 sets of 10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Bent Over Barbell Row          3 sets of 10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Bent Over Row                  3 sets of 12 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    tSmith Machine Upright Row      3 sets of 8-10 reps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Biceps\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Cable Curl                     4 sets of 8-10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Concentration Curl             3 sets of 10 reps\n");
    printf("\t\t\t\t\t\t\t\t\t\t    Reverse Barbell Curl           3 sets of 10 reps\n");
			 	printf(" DO you want to see anther exersices (Y/N) :\n");
	 	scanf(" %s",&anther);
	 	if(anther=='Y'||anther=='y'){//if statment to creat  i option for user to press Y(which mean see anther exersices) OR N (whitch mean back manminue)/
	 		return  recordstuff();
		 }//end of if statment
		 else{
		 	return main();
		 }//end of else
		 return 0;
	
}//end of intermedeat exersices

char recordstufff(){
	printf("\t\t\t\t\t\t\t\t\t\t    Monday                              Chest and Arms\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Flat bench barbell press            4 sets of 8 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Push ups                            4 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Cable crossovers                    3 sets of 15 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Incline dumbbell flyes              4 sets of 12 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Barbell biceps curls                3 sets of 15 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Alternate arm hammer curls          4 sets of 12 reps per arm\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Triceps rope overhead extensions    3 sets of 20 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Triceps dips                        3 sets of 15 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    10 minutes on the elliptical machine\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Tuesday                             Shoulders and Back\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Standing barbell military press     4 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Dumbbell lateral raises             4 sets of 15 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    EZ bar upright rows                 3 sets of 15 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Seated dumbbell shoulder press      4 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Dumbbell shrugs                     4 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Close-grip lat pulldowns            4 sets of 12 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Dumbbell bent over rows             4 sets of 12 reps per arm\n");
	printf("\t\t\t\t\t\t\t\t\t\t    T-Bar rows                          4 sets of 10 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    10 minutes on the stationary bike\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Wednesday                           Cardio Circuit\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t    10 burpees\n");
	printf("\t\t\t\t\t\t\t\t\t\t    10 push ups\n");
	printf("\t\t\t\t\t\t\t\t\t\t    15 crunches\n");
	printf("\t\t\t\t\t\t\t\t\t\t    20 squat thrusts\n");
	printf("\t\t\t\t\t\t\t\t\t\t    3 sets of 10 hanging leg raises\n");
	printf("\t\t\t\t\t\t\t\t\t\t    3 x 1-minute rounds of plank\n");
	printf("\t\t\t\t\t\t\t\t\t\t    20 minutes low intensity cardio on the treadmill\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Thursday                           Strength day\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t    ncline dumbbell press              5 sets of 5 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    lat bench barbell press           5 sets of 5 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Deadlifts                          5 sets of 5 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Barbell clean and press            5 sets of 5 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Barbell bent-over rows             5 sets of 5 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Barbell snatch                     5 sets of 5 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    10 minutes on the stationary bike\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Friday                             Legs\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Barbell squats                     4 sets of 8 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Leg press machine                  3 sets of 12 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Leg extensions                     3 sets of 15 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Hamstring curls                    3 sets of 15 reps\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Walking lunges                     4 sets of 10 reps per leg\n");
	printf("\t\t\t\t\t\t\t\t\t\t    Seated or standing calf raises     4 sets of 20 reps per leg\n");
	printf("\t\t\t\t\t\t\t\t\t\t    10 minutes on the elliptical machine\n\n\n");
			 	printf(" DO you want to see anther exersices (Y/N) :\n");
	 	scanf(" %s",&anther);//if statment to creat  i option for user to press Y(which mean see anther exersices) OR N (whitch mean back manminue)/
	 	if(anther=='Y'||anther=='y'){
	 		return  recordstuff();
		 }//end of if statment
		 else{
		 	return main();
		 }//end of else
		 return 0;
		
}//end of function exersices for women
