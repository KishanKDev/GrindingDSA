# Write your MySQL query statement below
SELECT pt.product_name,st.year,st.price
FROM Sales AS st INNER JOIN Product as pt
ON st.product_id=pt.product_id;