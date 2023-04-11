# Write your MySQL query statement below
SELECT x.id
FROM Weather x
JOIN Weather y ON x.recordDate = DATE_ADD(y.recordDate, INTERVAL 1 DAY)
WHERE x.temperature > y.temperature;