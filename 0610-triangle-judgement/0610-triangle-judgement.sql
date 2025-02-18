# Write your MySQL query statement below
select x,y,z,
-- if(x+y>z and y+z>x and x+z>y, "Yes", "No") as triangle
case when x+y>z and y+z>x and x+z>y then "Yes"
else "No" 
 end as triangle
from Triangle