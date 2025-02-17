# Write your MySQL query statement below
select d.name from
(
    select  s.sales_id, 
        s.name,  
        o.order_id,   
        o.com_id   
from SalesPerson as s
left join Orders as o
on s.sales_id = o.sales_id
group by name
) as d
left join Company as c
on c.com_id = d.com_id
where c.name != 'RED' || c.name is null