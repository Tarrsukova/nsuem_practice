$a=array_search('Студент', $form['account']['roles']['#options']);
$form['account']['roles']['#default_value'][]=$a;
 /*   echo '<pre>';
	  var_dump($form['account']['roles']);
	 echo '</pre>';
	 die;  */

/* 	$roles=function user_role_load_by_name('Студент'); */

/*  $form['account']['roles']['#access']=true; */
//drupal_set_message('Ваша заявка на вакансию $node->title отправлена');
//drupal_goto('vacancies/');
