# Laboratorio 8

Para esta sesión de laboratorio se forman equipos de trabajo para dividirse y realizar 16 ejercicios.  
**Numero de Break-Up room: 03**

    Los ejercicios de la base de datos de hospital.bd compienzan con el numero 1, seguido de un guion y el numero de ejercicio.
    Mientras que los ejercicios de la base de datos northway comienzan con el numero 2, seguido de un guin y el numero de ejercicio.


La siguiente tabla muestra el ejercicio realizado y la persona que lo realiza:

                                                            --------------------------------------
                                                            | Ejercicio | Persona que lo realiza |
                                                            |-----------|------------------------|
                                                            |    1-1    |    Kryssia Martinez    |
                                                            |    1-2    |    Kryssia Martinez    |
                                                            |    1-3    |    Kryssia Martinez    |
                                                            |    1-4    |    Kryssia Martinez    |
                                                            |    1-5    |    Marcelo Valverde    |
                                                            |    1-6    |    Marcelo Valverde    |
                                                            |    1-7    |    Marcelo Valverde    |
                                                            |    1-8    |    Marcelo Valverde    |
                                                            |    2-1    |       Oscar Rojas      |
                                                            |    2-2    |       Oscar Rojas      |
                                                            |    2-3    |       Oscar Rojas      |
                                                            |    2-4    |       Oscar Rojas      |
                                                            |    2-5    |      Jorge Meneses     |
                                                            |    2-6    |      Jorge Meneses     |
                                                            |    2-7    |      Jorge Meneses     |
                                                            |    2-8    |      Jorge Meneses     |


Ejercicio 1-1:  

    We are looking for a specific patient. Pull all columns for the patient who matches the following criteria:  
    - First_name contains an 'r' after the first two letters.  
    - Identifies their gender as 'F'  
    - Born in February, May, or December  
    - Their weight would be between 60kg and 80kg  
    - Their patient_id is an odd number  
    - They are from the city 'Kingston'  

![alternative text](<images\Ejercicio 1-1.jpg>)

Ejercicio 1-2:

    Show the provinces that has more patients identified as 'M' than 'F'. Must only show full province_name

![alternative text](<images\Ejercicio 1-2.jpg>)

Ejercicio 1-3:

    Each admission costs $50 for patients without insurance, and $10 for patients with insurance. All patients with an even patient_id have insurance.
    Give each patient a 'Yes' if they have insurance, and a 'No' if they don't have insurance. Add up the admission_total cost for each has_insurance group.


![alternative text](<images\Ejercicio 1-3.jpg>)

Ejercicio 1-4:

    All patients who have gone through admissions, can see their medical documents on our site. Those patients are given a temporary password after their first admission. Show the patient_id and temp_password.
    The password must be the following, in order:
    1. patient_id
    2. the numerical length of patient's last_name
    3. year of patient's birth_date

![alternative text](<images\Ejercicio 1-4.jpg>)

Ejercicio 1-5:

    We need a breakdown for the total amount of admissions each doctor has started each year. Show the doctor_id, doctor_full_name, specialty, year, total_admissions for that year.

![alternative text](<images\problema1-5.png>)

Ejercicio 1-6:

    Sort the province names in ascending order in such a way that the province 'Ontario' is always on top.

![alternative text](<images\problema1-6.png>)

Ejercicio 1-7:

    For each day display the total amount of admissions on that day. Display the amount changed from the previous date.

![alternative text](<images\problema1-7.png>)

Ejercicio 1-8:

    Show the percent of patients that have 'M' as their gender. Round the answer to the nearest hundreth number and in percent form.

![alternative text](<images\problema1-8.png>)

Ejercicio 2-1:

    Show the company_name, contact_name, fax number of all customers that has a fax number. (not null)

![alternative text](<images\problema2-1.png>)

Ejercicio 2-2:

    Show the first_name, last_name. hire_date of the most recently hired employee.

![alternative text](<images\problema2-2.png>)

Ejercicio 2-3:

    Show the average unit price rounded to 2 decimal places, the total units in stock, total discontinued products from the products table.

![alternative text](<images\problema2-3.png>)

Ejercicio 2-4:

    Show the ProductName, CompanyName, CategoryName from the products, suppliers, and categories table

![alternative text](<images\problema2-4.png>)

Ejercicio 2-5:

    Show the category_name and the average product unit price for each category rounded to 2 decimal places.

![alternative text](<images\problema2-5.png>)

Ejercicio 2-6:

    Show the city, company_name, contact_name from the customers and suppliers table merged together. Create a column which contains 'customers' or 'suppliers' depending on the table it came from.

![alternative text](<images\problema2-6.png>)

Ejercicio 2-7:

    Show the employee's first_name and last_name, a "num_orders" column with a count of the orders taken, and a column called "Shipped" that displays "On Time" if the order shipped_date is less or equal to the required_date, "Late" if the order shipped late. Order by employee last_name, then by first_name, and then descending by number of orders.

![alternative text](<images\problema2-7.png>)

Ejercicio 2-8:

    Show how much money the company lost due to giving discounts each year, order the years from most recent to least recent. Round to 2 decimal places

![alternative text](<images\problema2-8.png>)

