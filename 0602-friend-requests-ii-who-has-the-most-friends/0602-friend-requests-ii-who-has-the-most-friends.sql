/* Write your T-SQL query statement below */
SELECT TOP 1 X.id, count(X.id) as num
FROM (
    SELECT requester_id as id
    FROM RequestAccepted
    UNION ALL
    SELECT accepter_id
    FROM RequestAccepted
) X
GROUP BY X.id
ORDER BY num DESC;