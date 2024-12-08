# Write your MySQL query statement below
-- SELECT 
--     s.user_id, 
--     COALESCE(
--         ROUND(
--             SUM(CASE WHEN c.action = 'confirmed' THEN 1.0 ELSE 0 END) / 
--             NULLIF(COUNT(c.action), 0), 
--         2), 
--     0.00) AS confirmation_rate
-- FROM 
--     Signups s
-- LEFT JOIN 
--     Confirmations c ON s.user_id = c.user_id
-- GROUP BY 
--     s.user_id;

SELECT 
    s.user_id, 
    ROUND(
        IFNULL(
            SUM(c.action = 'confirmed') / COUNT(c.action), 
            0
        ), 
        2
    ) AS confirmation_rate
FROM 
    Signups s
LEFT JOIN 
    Confirmations c ON s.user_id = c.user_id
GROUP BY 
    s.user_id;    