#include <iostream>
using namespace std;

int main() {
    string option, old_pin,new_pin,receiver_num,amount;
    bool pin_out;
    int pin_count;
    int pin_limit;
    pin_limit=3;
    pin_count=false;
    
    cout << "welcome to legacy mobile money service \n";
    cout << "1, authentication \n";
    cout << "2, change pin \n";
    cout << "3, check balance \n";
    cout << "4, send money \n";
    cout << "select option by entering 1-4: \n";
    cin >> option;
    if (option=="1"){
    	while(old_pin != "0000" and not(pin_out)){
    		if (pin_count<=pin_limit){
    			cout << "enter your pin to accept withdrawals of 500 cedis: ";
    			cin >> old_pin;
    			pin_count+=1;}
    			
    		else {pin_out==true;}
	}
		if (pin_out==true){
			cout << "your account is blocked for too many attempts";
	}
		else{
			cout << "you have successfully withdrawn 500cedis from your account";
			cout << "with fee of 5 cedis";
	}
	
}
else if (option=="2"){
    while(old_pin != "0000" and not(pin_out)){
		if (pin_count<=pin_limit){
			cout << "enter old pin: ";
			cin >> old_pin;
			pin_count+=1;}
			
		else{pin_out=true;}
		}	
				
		
		if (pin_out==true){
            cout << "your account is blocked for too many attempts";} 		
		else{
		cout << "enter new pin ";
		
		cin >> new_pin;
		if (new_pin==old_pin){
	 	    cout << "pin already exit";
	 }
	 cout << "your pin has been resetted successfully";
		}}
		
	else if (option=="3"){
		while(old_pin != "0000" and not(pin_out)){
			
			if (pin_count<=pin_limit){
				cout << "enter pin ";
				cin >> old_pin;
				pin_count+=1;}
				
			else {pin_out=true;}	
			}
		if (pin_out==true){
		cout << "your account 1= blocked for too many attempts";	
		}	
        else{
			cout << "your balance is 1000 cedis";	
			
    }
}
else if (option=="4")
{
    cout << "enter receiver num: ";
	cin >> receiver_num;
	cout << "enter amount to be sent: ";
	cin >> amount;
	
	while(old_pin != "0000" and not(pin_out)){
	    if (pin_count<=pin_limit){
	    	cout << "enter pin: ";
	    	cin >> old_pin;
	    	pin_count+=1;}
	    	
	    else{pin_out=true;}
		}
	if (pin_out==true){
		cout << "your account is blocked for too many attempts";
}
		else{
		    cout << "you have successfully";
	}
}
}		
			
			
		