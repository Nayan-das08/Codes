LAB 4 - CLAUSES AND EQUI-JOIN

CREATE TABLE customer
(
	c_id 		int PRIMARY KEY,
	c_name 	varchar(20) NOT NULL,
	mobile 	int         UNIQUE,
	address varchar(40) NOT NULL,
	country varchar(20)
)

mysql> CREATE TABLE customer
    -> (
    ->  c_id            int PRIMARY KEY,
    ->  c_name  varchar(20) NOT NULL,
    ->  mobile  int         UNIQUE,
    ->  address varchar(40) NOT NULL,
    ->  country varchar(20)
    -> );
Query OK, 0 rows affected (1.17 sec)

----------------------------

mysql> DESC customer;
+---------+-------------+------+-----+---------+-------+
| Field   | Type        | Null | Key | Default | Extra |
+---------+-------------+------+-----+---------+-------+
| c_id    | int         | NO   | PRI | NULL    |       |
| c_name  | varchar(20) | NO   |     | NULL    |       |
| mobile  | int         | YES  | UNI | NULL    |       |
| address | varchar(40) | NO   |     | NULL    |       |
| country | varchar(20) | YES  |     | NULL    |       |
+---------+-------------+------+-----+---------+-------+
5 rows in set (0.13 sec)

-------------------------------

INSERT into customer values
(2, 'Pragnya',  12345678, 'South-EX part 2', 'India'),
(3, 'Adersh',   15498435, 'IP Extn',         'Canada'),
(4, 'Yash',     35184864, 'Pilkhuwl',        'France'),
(5, 'Shruti',   53184588, 'Ashok Vihar',     'India'),
(6, 'Aditya',   54384313, 'Noida Sec 25',    'Canada'),
(7, 'Jaisurya', 83184691, 'Vaishali',        'India'),
(8, 'Shubham',  93468435, 'Karkardooma',     'France'),
(9, 'Shivansh', 96484354, 'Noida Sec 128',   'India');

mysql> INSERT into customer values
    -> (2, 'Pragnya',  12345678, 'South-EX part 2', 'India'),
    -> (3, 'Adersh',   15498435, 'IP Extn',         'Canada'),
    -> (4, 'Yash',     35184864, 'Pilkhuwl',        'France'),
    -> (5, 'Shruti',   53184588, 'Ashok Vihar',     'India'),
    -> (6, 'Aditya',   54384313, 'Noida Sec 25',    'Canada'),
    -> (7, 'Jaisurya', 83184691, 'Vaishali',        'India'),
    -> (8, 'Shubham',  93468435, 'Karkardooma',     'France'),
    -> (9, 'Shivansh', 96484354, 'Noida Sec 128',   'India');
Query OK, 8 rows affected (0.66 sec)
Records: 8  Duplicates: 0  Warnings: 0

----------------------------------------

mysql> SELECT * from customer;
+------+----------+----------+-----------------+---------+
| c_id | c_name   | mobile   | address         | country |
+------+----------+----------+-----------------+---------+
|    2 | Pragnya  | 12345678 | South-EX part 2 | India   |
|    3 | Adersh   | 15498435 | IP Extn         | Canada  |
|    4 | Yash     | 35184864 | Pilkhuwl        | France  |
|    5 | Shruti   | 53184588 | Ashok Vihar     | India   |
|    6 | Aditya   | 54384313 | Noida Sec 25    | Canada  |
|    7 | Jaisurya | 83184691 | Vaishali        | India   |
|    8 | Shubham  | 93468435 | Karkardooma     | France  |
|    9 | Shivansh | 96484354 | Noida Sec 128   | India   |
+------+----------+----------+-----------------+---------+
8 rows in set (0.11 sec)

--------------------------------------

SELECT count(c_id), country from customer
GROUP BY country;

mysql> SELECT count(c_id), country from customer
    -> GROUP BY country;
+-------------+---------+
| count(c_id) | country |
+-------------+---------+
|           4 | India   |
|           2 | Canada  |
|           2 | France  |
+-------------+---------+
3 rows in set (0.12 sec)

-------------------------------------------

SELECT count(c_id), country from customer
GROUP BY country
HAVING count(c_id) > 2;

mysql> SELECT count(c_id), country from customer
    -> GROUP BY country
    -> HAVING count(c_id) > 2;
+-------------+---------+
| count(c_id) | country |
+-------------+---------+
|           4 | India   |
+-------------+---------+
1 row in set (0.03 sec)

---------------------------------------------

CREATE TABLE orders
(
	Order_no int PRIMARY KEY,
	Customer_id int,
	Order_status varchar(10)
);

mysql> CREATE TABLE orders
    -> (
    ->  Order_no int PRIMARY KEY,
    ->  Customer_id int,
    ->  Order_status varchar(30)
    -> );
Query OK, 0 rows affected (0.12 sec)

-----------------------------------------

mysql> DESC orders;
+--------------+-------------+------+-----+---------+-------+
| Field        | Type        | Null | Key | Default | Extra |
+--------------+-------------+------+-----+---------+-------+
| Order_no     | int         | NO   | PRI | NULL    |       |
| Customer_id  | int         | YES  |     | NULL    |       |
| Order_status | varchar(30) | YES  |     | NULL    |       |
+--------------+-------------+------+-----+---------+-------+
3 rows in set (0.00 sec)

-------------------------------------

INSERT into orders values
(1234, 7, 'Delivered'),
(1235, 4, 'Dispatched'),
(1236, 2, 'Order Cancelled'),
(1237, 3, 'Delivered'),
(1238, 9, 'Delivered');

mysql> INSERT into orders values
    -> (1234, 7, 'Delivered'),
    -> (1235, 4, 'Dispatched'),
    -> (1236, 2, 'Order Cancelled'),
    -> (1237, 3, 'Delivered'),
    -> (1238, 9, 'Delivered');
Query OK, 5 rows affected (0.68 sec)
Records: 5  Duplicates: 0  Warnings: 0

---------------------------------------

mysql> SELECT * from orders;
+----------+-------------+-----------------+
| Order_no | Customer_id | Order_status    |
+----------+-------------+-----------------+
|     1234 |           7 | Delivered       |
|     1235 |           4 | Dispatched      |
|     1236 |           2 | Order Cancelled |
|     1237 |           3 | Delivered       |
|     1238 |           9 | Delivered       |
+----------+-------------+-----------------+
5 rows in set (0.00 sec)

---------------------------------------

SELECT orders.Order_no, orders.Customer_id, customer.c_name, orders.Order_status
FROM customer, orders
WHERE customer.c_id = orders.Customer_id
ORDER BY customer.c_id; 

mysql> SELECT orders.Order_no, orders.Customer_id, customer.c_name, orders.Order_status
    -> FROM customer, orders
    -> WHERE customer.c_id = orders.Customer_id
    -> ORDER BY customer.c_id;
+----------+-------------+----------+-----------------+
| Order_no | Customer_id | c_name   | Order_status    |
+----------+-------------+----------+-----------------+
|     1236 |           2 | Pragnya  | Order Cancelled |
|     1237 |           3 | Adersh   | Delivered       |
|     1235 |           4 | Yash     | Dispatched      |
|     1234 |           7 | Jaisurya | Delivered       |
|     1238 |           9 | Shivansh | Delivered       |
+----------+-------------+----------+-----------------+
5 rows in set (0.00 sec)

----------------------------------------------------
----------------------------------------------------

LAB 3 - AGGREGATE FUNCTIONS

CREATE TABLE employee
(
    empid   integer         PRIMARY KEY,
    empname varchar(20)     NOT NULL,
    salary  integer         NOT NULL,
    gender  varchar(10)     NOT NULL,
    dept_no varchar(20)     NOT NULL,
    doj     date            NOT NULL
);

INSERT INTO employee VALUES
(100, "Shubham", 56325, "Male", "IT", "2022-01-15"),
(101, "Prapti", 59500, "Female", "IT", "2022-01-20"),
(102, "Nayan", 51500, "Male", "HR", "2022-01-20"),
(103, "Jaisurya", 51200, "Male", "Medical", "2022-03-10"),
(104, "Pragnya", 51100, "Female", "Accounts", "2021-05-12"),
(105, "Shruti", 52660, "Female", "IT", "2023-08-26"),
(106, "Dikhsha", 54660, "Female", "Accounts", "2023-04-22");

mysql> SELECT * FROM employee;
+-------+----------+--------+--------+----------+------------+
| empid | empname  | salary | gender | dept_no  | doj        |
+-------+----------+--------+--------+----------+------------+
|   100 | Shubham  |  56325 | Male   | IT       | 2022-01-15 |
|   101 | Prapti   |  59500 | Female | IT       | 2022-01-20 |
|   102 | Nayan    |  51500 | Male   | HR       | 2022-01-20 |
|   103 | Jaisurya |  51200 | Male   | Medical  | 2022-03-10 |
|   104 | Pragnya  |  51100 | Female | Accounts | 2021-05-12 |
|   105 | Shruti   |  52660 | Female | IT       | 2023-08-26 |
|   106 | Dikhsha  |  54660 | Female | Accounts | 2023-04-22 |
+-------+----------+--------+--------+----------+------------+
7 rows in set (0.00 sec)

SELECT min(salary) FROM employee;

SELECT * FROM employee
WHERE salary = (SELECT min(salary) FROM employee);


SELECT max(salary) FROM employee;


SELECT sum(salary) FROM employee;

SELECT avg(salary) FROM employee;

SELECT count(*) FROM employee;

SELECT (sum(salary))/count(*) AS "avg(sal)" FROM employee;

SELECT count(DISTINCT dept_no) FROM employee;

SELECT count(*) FROM employee
WHERE gender = "Male";

SELECT * FROM employee
ORDER BY empid DESC;

SELECT * FROM employee
ORDER BY empname;

SELECT * FROM employee
WHERE empid BETWEEN 100 AND 103;

SELECT * FROM employee
WHERE empname BETWEEN "A" AND "L";

SELECT empid AS employee_ID FROM employee;

SELECT max(salary) AS MAX_Salary FROM employee;

SELECT * FROM employee
WHERE empname LIKE "%i%";

SELECT * FROM employee
WHERE doj LIKE "____%02%";