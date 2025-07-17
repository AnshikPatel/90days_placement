 
create database startsql;

use database startsql;

-- now create table 
       create table users (id INT AUTO_INCREMENT PRIMARY KEY, 
                           name VARCHAR(100) NOT NULL,
                           email VARCHAR(100) UNIQUE NOT NULL,
                           gender ENUM('Male','Female','Other'),
                           date_of_birth DATE,
                           create_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP);

select * from users;
select id,email from users;

rename table users to  student;       --    rename

drop database startsql;               --   drop all the database

alter table users add column is_active BOOLEAN DEFAULT true;

alter table users drop column is_active;

alter table users MODIFY column name VARCHAR(150); 


insert into user values(1,'anshik','anshikpatel16aug@gmail.com','Male',"16-08-2004");
