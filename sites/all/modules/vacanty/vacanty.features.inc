<?php
/**
 * @file
 * vacanty.features.inc
 */

/**
 * Implements hook_node_info().
 */
function vacanty_node_info() {
  $items = array(
    'vacancy' => array(
      'name' => t('Вакансия'),
      'base' => 'node_content',
      'description' => t('•	Вакансия 
1.	Название вакансии
2.	Требования
3.	Обязанности(что будешь делать)
4.	Условия работы
5.	Название фирмы(ссылка на нее)
6.	Направление подготовки(таксономия)
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
