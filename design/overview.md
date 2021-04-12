# Design

- Banking system (Fake)
- Text based interface
- Windows and Linux compatible

## Interface

The interface is a simple text based one intended to be run inside a command prompt / terminal. Below various screens are documented. This provides a simple overview of the structure of the application and what features are to be implemented.

First, lets go over some conventions.

- $ - Denotes the system waiting for user input.

***

### Common Screen Inputs

The following inputs are common to various screens in the system.

- b - Go back a screen in menu (If applicable)
- c - Cancel and return to initial screen (If applicable)
- q - Quit application

***
<br />

### Initial Screen

<br />

> 1\. Create account  
> 2. Manage account  
> 3. Preferences  
> $

<br />

***

### Account Create Screen (1)

<br />

> Select Currency   
> 1\. Thai Baht  
> 2.  Euro  
> 3.  US Dollar  
> 4.  Japanese Yen    
> $ 

<br />

***

### Account Create Screen (2)

> Enter Account Name  
> $

**Note:**

- Max characters: 63
- Min characters: 3
- Acceptable characters: All upper and lower case letters (No numbers or symbols)

<br />

***

### Manage Account Screen (1)

> Select Account   
> 1\. Bills [Euro]  
> 2.  Savings [Euro]  
> 3.  Investment [Thai Baht]  
> $ 

<br />

***

### Manage Account Screen (2)

> Select Action   
> 1\. Transfer  
> 2.  Deposit  
> 3.  View History  
> 4.  Close  
> $ 

<br />

***

### Manage Account Screen (2) - Transfer (1)

> Select Recipient Account  
> 1\.  Savings [Euro]  
> 2.  Investment [Thai Baht]  
> $

**Note:**

- The selected account ("Bills" in this case) should *NOT* be displayed as an option

<br />

***

### Manage Account Screen (2) - Transfer (2)

> Enter Amount (Euros) - €4321.56 available  
> $

**Note:**

- Input must be a numeric value between 0.01 and the available balance
- Invalid input should result in an error message to the user

<br />

***

### Manage Account Screen (2) - Transfer (3)

> Transferring €500.00 from "Bills" to "Investment"  
> 
> Conversion rate: 37.53174  
> Amount in Thai Baht: 18,766.90  
> 
> Confirm Transaction? (yes | cancel)   
> $

**Note:**

- Trailing decimal places removed
- "yes" or "cancel" are the acceptable inputs

<br />

***

### Manage Account Screen (2) - Deposit (1)

> Enter Amount To Deposit (Euro)  
> $

**Note:**

- We don't deposit from anywhere. Money is just created from nothing
- Currency is determined from what is used by the account. I.e Euro accounts deposit in Euros

<br />

***

### Manage Account Screen (2) - View History (1)

> Transaction History for "Bills"  
>  
> Date &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Amount &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Balance
>   
> 23/06/2021 &nbsp;&nbsp; +€500.00 &nbsp;&nbsp;&nbsp; €500.00  
> 25/06/2021 &nbsp;&nbsp; -€100.00 &nbsp;&nbsp;&nbsp;&nbsp; €400.00  
> 26/06/2021 &nbsp;&nbsp; -€250.00 &nbsp;&nbsp;&nbsp;&nbsp; €150.00  
> 04/07/2021 &nbsp;&nbsp; +€1200.00 &nbsp; €1350.00  
>  
> $

<br />

***

### Manage Account Screen (2) - Close (1)

> Are you sure you want to close "Bills"?
>  
> To confirm enter name of account  
> $

**Notes:** 

- Will return to initial screen if successful
- If input differs from account name, inform the user and retry
- After this transaction, the account will no longer be displayed
- If the account still has money in it, it cannot be closed. Inform user and return to initial screen

<br />

***

### Preferences Screen (1)

To be decided. Ideas..

- Change date format
