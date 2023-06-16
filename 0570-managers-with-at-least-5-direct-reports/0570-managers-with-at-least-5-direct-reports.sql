# Write your MySQL query statement below
select name from Employee where id in(select managerId from Employee group by managerId HAVING 5<=count(managerId));

