-- Write your PostgreSQL query statement below
-- select customer_id, count(customer_id) as count_no_trans
select v.customer_id, count(v.visit_id) as count_no_trans
from Visits as v
left join Transactions as t
on v.visit_id = t.visit_id
where transaction_id is null
group by v.customer_id


