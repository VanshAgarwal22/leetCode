# Write your MySQL query statement below
SELECT user_id as buyer_id, join_date, CASE WHEN o.order_id is null THEN 0 ELSE COUNT(*) END AS orders_in_2019
FROM Users u
LEFT JOIN (SELECT * FROM Orders where YEAR(order_date) = 2019) o ON u.user_id = o.buyer_id
GROUP BY u.user_id;