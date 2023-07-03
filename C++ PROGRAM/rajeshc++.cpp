#include<bits/stdc++.h>
using namespace std;
// Database to store the records of the details of emi installments.
class Database{
	// Fields/variables which will be stored in the database of emi installments.
	private:
		int EMI_no;
		float principal_EMI;
		float interest_EMI;
		float total_EMI;
		string EMI_date;
		float principal_Remaining;
	public:
		// Database constructor.
		Database(){}
		// Database storing the results in the variables/fields declared in the database.
		Database(int emi_no, float principal_emi, float interest_emi, float total_emi, string emi_date, float principal_remaining){
			EMI_no = emi_no;
			principal_EMI = principal_emi;
			interest_EMI = interest_emi;
			total_EMI = total_emi;
			EMI_date = emi_date;
			principal_Remaining = principal_remaining;
		}
		// Function to return the emi number.
		int getEMI(){
			return EMI_no;
		}
		// Function to return the principal emi.
		float getPrincipalEMI(){
			return principal_EMI;
		}
		// Function to return the interest emi.
		float getInterestEMI(){
			return interest_EMI;
		}
		// Functio to return the total emi.
		float getTotalEMI(){
			return total_EMI;
		}
		// Function to return the emi date.
		string getEMIDate(){
			return EMI_date;
		}
		// Function to return the remaining principal.
		float getPrincipalRemaining(){
			return principal_Remaining;
		}
};
// Class to calculate the emi and display the breakups.
class EMICalculator{
	// Variables set for emi no, number of installments, next month date and interest (static).
	private:
		int EMINo = 1;
		int timet;
		int SlNo = 1;
		int nextMnth = 30;
		float interest = 120;
	public:
		// User friendly function created to convert the month entered by the user to a standard form.
		string returnMonthString(string startmonth){
			if(startmonth == "January" || startmonth == "jan" || startmonth == "january")
				startmonth = "Jan";
			else if(startmonth == "February" || startmonth == "feb" || startmonth == "february")
				startmonth = "Feb";
			else if(startmonth == "March" || startmonth == "mar" || startmonth == "march")
				startmonth = "Mar";
			else if(startmonth == "April" || startmonth == "apr" || startmonth == "april")
				startmonth = "Apr";
			else if(startmonth == "may")
				startmonth = "May";
			else if(startmonth == "June" || startmonth == "jun" || startmonth == "june")\
				startmonth = "June";
			else if(startmonth == "July" || startmonth == "jul" || startmonth == "july")
				startmonth = "Jul";
			else if(startmonth == "August" || startmonth == "aug" || startmonth == "august")
				startmonth = "Aug";
			else if(startmonth == "September" || startmonth == "sept" || startmonth == "september")
				startmonth = "Sept";
			else if(startmonth == "October" || startmonth == "oct" || startmonth == "october")
				startmonth = "Oct";
			else if(startmonth == "November" || startmonth == "nov" || startmonth == "november")
				startmonth = "Nov";
			else
				startmonth = "Dec";
			return startmonth;
		}
		// Function to get the next month installment.
		string returnMonthStart(string startmonth){
			if(startmonth == "Jan")
				startmonth = "Feb";
			else if(startmonth == "Feb")
				startmonth = "Mar";
			else if(startmonth == "Mar")
				startmonth = "Apr";
			else if(startmonth == "Apr")
				startmonth = "May";
			else if(startmonth == "May")
				startmonth = "Jun";
			else if(startmonth == "Jun")
				startmonth = "Jul";
			else if(startmonth == "Jul")
				startmonth = "Aug";
			else if(startmonth == "Aug")
				startmonth = "Sept";
			else if(startmonth == "Sept")
				startmonth = "Oct";
			else if(startmonth == "Oct")
				startmonth = "Nov";
			else if(startmonth == "Nov")
				startmonth = "Dec";
			else
				startmonth = "Jan";
			return startmonth;
		}
		// Function to calculate the net amount for next month and installments and store in the database.
		void calculateNETAmount(Database *db, float amount, int timet, float principalemi, float interestemi, int startdate, string startMonth, int startyear){
			// find the total amount.
			float totalAmount = amount + interest;
			// find the total emi.
			float totalemi = principalemi + interestemi;
			// convert the month enterest by the user to a standard form.
			string startmonthnew = returnMonthString(startMonth);
			// Display results for current amount entered.
			cout<<"Loan creation date: "<<startdate<<" "<<startmonthnew<<" "<<startyear<<endl;
			cout<<"Principal Amount : "<<amount<<endl;
			cout<<"No of EMI's: "<<timet<<endl;
			cout<<"Total Payable amount: "<<totalAmount<<endl;
			cout<<"EMI Details: "<<endl;
			float netEMI;
			// Use loop to enter the emi amount data into the database.
			for(int i = 0; i < timet; i++){
				// return the next month of the installment.
				string startmonth = returnMonthStart(startmonthnew);
				if(startmonth == "Dec")
					startyear += 1;
				// get the next final date of installment.
				string finaldate = to_string(startdate) + " " + startmonth + " " + to_string(startyear);
				netEMI = totalAmount - totalemi;
				// push the record to the database.
				db[i] = Database(EMINo++, principalemi, interestemi, totalemi, finaldate, float(netEMI));
				// update the next month.
				startmonthnew = startmonth;
				// update the net amount.
				totalAmount = netEMI;
			}
		}
		// Function to view the complete emi installment details.
		void printDatabase(Database *db, int timet){
			for(int i = 0; i < timet; i++){
				cout<<"EMI No: "<<db[i].getEMI()<<", "<<"Principal EMI: "<<db[i].getPrincipalEMI()<<", "<<"Interest EMI: "<<db[i].getInterestEMI()
				<<", "<<"Total EMI: "<<db[i].getTotalEMI()<<", "<<"EMI Date: "<<db[i].getEMIDate()<<", "<<"Principal remaining: "<<db[i].getPrincipalRemaining()<<endl;
			}
		}
};
// Driver function to check the above system design.
int main(){
	EMICalculator a;
	float amount;
	cout<<"Enter the total amount"<<endl;
	cin>>amount;
	int timet;
	cout<<"Enter the time period"<<endl;
	cin>>timet;
	float principalEMI;
	cout<<"Enter the principal EMI"<<endl;
	cin>>principalEMI;
	float interestEMI;
	cout<<"Enter the interest EMI"<<endl;
	cin>>interestEMI;
	int date;
	cout<<"Enter the start date"<<endl;
	cin>>date;
	string month;
	cout<<"Enter the start month"<<endl;
	cin>>month;
	int year;
	cout<<"Enter the start year"<<endl;
	cin>>year;
	Database db[timet];
	a.calculateNETAmount(db, amount, timet, principalEMI, interestEMI, date, month, year);
	a.printDatabase(db, timet);
	return 0;
}
