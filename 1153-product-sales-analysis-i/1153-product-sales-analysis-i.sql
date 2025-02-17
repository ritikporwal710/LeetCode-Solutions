# Write your MySQL query statement below
select product_name, year, price
from Product as p
left join Sales as s
on p.product_id = s.product_id
where price is not null