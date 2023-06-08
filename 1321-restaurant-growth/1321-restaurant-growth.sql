# Write your MySQL query statement below
select visited_on, amount, average_amount from
(select visited_on,
@cnt := @cnt + 1 as cnt,
@d7 := @d6,
@d6 := @d5,
@d5 := @d4,
@d4 := @d3,
@d3 := @d2,
@d2 := @d1,
@d1 := amount,
@total := @d1 + @d2 + @d3 + @d4 + @d5 + @d6 + @d7 as amount,
round(@total / 7, 2) as average_amount
from
(
    select visited_on, sum(amount) as amount from Customer group by visited_on
) as c,
(
select
@cnt := 0,
@total := 0,
@d1 := 0,
@d2 := 0,
@d3 := 0,
@d4 := 0,
@d5 := 0,
@d6 := 0,
@d7 := 0
) as t
) as s
where cnt >= 7;