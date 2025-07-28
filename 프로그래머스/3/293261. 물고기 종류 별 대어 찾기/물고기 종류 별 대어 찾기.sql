-- 코드를 작성해주세요
select fi_in.ID, fi_name.FISH_NAME, fi_in.LENGTH
FROM FISH_INFO fi_in
JOIN FISH_NAME_INFO fi_name
ON fi_in.FISH_TYPE = fi_name.FISH_TYPE
where (fi_in.FISH_TYPE, fi_in.LENGTH) IN (
select FISH_TYPE, MAX(LENGTH) 
from FISH_INFO
where LENGTH is not null
GROUP by FISH_TYPE
)

