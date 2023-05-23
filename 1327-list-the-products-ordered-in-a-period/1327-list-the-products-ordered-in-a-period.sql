# Write your MySQL query statement below
WITH CTE AS (
        SELECT
            T2.product_name,
            SUM(T1.unit) unit
        FROM
            Orders T1
        INNER JOIN
            Products T2 ON T1.product_id = T2.product_id
        WHERE
            order_date > '2020-01-31' AND 
            order_date < '2020-03-01'
        GROUP BY
            T2.product_name
)
SELECT
    *
FROM
    CTE 
WHERE
    unit > 99