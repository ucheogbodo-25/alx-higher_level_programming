-- Lists all records of the table second_table having a name value.
-- Records are arranged in descending score.
SELECT `score`, `name`
FROM `second_table`
WHERE `name` != ""
ORDER BY `score` DESC
