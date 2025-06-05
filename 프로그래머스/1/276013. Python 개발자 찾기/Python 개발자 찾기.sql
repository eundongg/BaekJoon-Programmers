select id, email, first_name, last_name
from developer_infos
where SKILL_1 = 'Python' ||	SKILL_2= 'Python' || SKILL_3= 'Python'
order by id;