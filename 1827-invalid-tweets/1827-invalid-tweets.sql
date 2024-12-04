# Write your MySQL query statement below
select tweet_id
FROM Tweets
WHERE char_length(content)>15;