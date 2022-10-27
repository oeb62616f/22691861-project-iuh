// Include 
#include <stdio.h>
#include <conio.h>

// Define
#define BANK_FEE_WITHDRAWALS_UNDER_S 5.0
#define BANK_FEE_WITHDRAWALS_UNDER_C 7.5
#define BANK_FEE_WITHDRAWALS_OVER 2.5
#define BANK_FEE_WITHDRAWALS_TIME_OVER 4
#define BANK_TYPEID_C 'C'
#define BANK_TYPEID_S 'S'
#define MIN_ID  1000
#define MAX_ID  9999

// Creating functions
float banking_fee(int id, char type_id, int withdraw_time);



// Creating variables
    // Input
int cust_id;
int with_drawals;
char account_type;
    // Output
float bank_charge;

// Main
int main()
{
    // Input cust_id
    printf("CustID: ");
    scanf("%d", &cust_id);

    // Input account_type
    printf("Account Type: ");
    scanf(" %c", &account_type);

    // Input with_drawals
    printf("Withdrawals:");
    scanf("%d", &with_drawals);

    bank_charge = banking_fee(cust_id,account_type,with_drawals);
    printf("BankCharge: %.2f ", bank_charge);

    return 1;
}


float banking_fee(int id, char type_id, int withdraw_time)
{
    
    float bank_charge = 0;
    bool data_type = false;
    bool datatype_custID = true;
    bool datatype_account_type = true;
    bool datatype_withdrawals = true;

    if(id < MIN_ID || id > MAX_ID)
    {
        datatype_custID = false;
    }

    if(type_id != BANK_TYPEID_C && type_id != BANK_TYPEID_S)
    {
        datatype_account_type = false;
    }

    if(datatype_withdrawals < 0)
    {
        datatype_withdrawals = false;
    }

    if(!datatype_custID)
    {
        printf("Incorrect CustID\n");
    }

    if(!datatype_account_type)
    {
        printf("Incorrect Account Type\n");
    }

    if(!datatype_withdrawals)
    {
        printf("Incorrect Withdrawals\n");
    }


    if (datatype_custID && datatype_account_type && datatype_withdrawals)
    {
        data_type = true;
        printf("CustID: %d\n", id);
    }


    if (data_type)
    {
        if(type_id == BANK_TYPEID_C)
        {
            if(withdraw_time <= BANK_FEE_WITHDRAWALS_TIME_OVER)
            {
                bank_charge = BANK_FEE_WITHDRAWALS_UNDER_C;
            }
            else
            {
                bank_charge = BANK_FEE_WITHDRAWALS_UNDER_C;
                bank_charge += (withdraw_time - BANK_FEE_WITHDRAWALS_TIME_OVER) * BANK_FEE_WITHDRAWALS_OVER;
            }
        }

        if(type_id == BANK_TYPEID_S)
        {
            if(withdraw_time <= BANK_FEE_WITHDRAWALS_TIME_OVER)
            {
                bank_charge = BANK_FEE_WITHDRAWALS_UNDER_S;
            }
            else
            {
                bank_charge = BANK_FEE_WITHDRAWALS_UNDER_S;
                bank_charge += (withdraw_time - BANK_FEE_WITHDRAWALS_TIME_OVER) * BANK_FEE_WITHDRAWALS_OVER;
            }
        }

    }

    return bank_charge;

}

