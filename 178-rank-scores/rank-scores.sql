# Write your MySQL query statement below
-- select score,DENSE_RANK() OVER (ORDER BY score DESC) AS rank
-- from Scores 
-- order by score desc ;
SELECT 
    score,
    DENSE_RANK() OVER (ORDER BY score DESC) AS 'rank'
FROM 
    Scores
ORDER BY 
    score DESC;
