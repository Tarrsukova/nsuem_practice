<?php
/**
 * @file
 * rezume.features.inc
 */

/**
 * Implements hook_node_info().
 */
function rezume_node_info() {
  $items = array(
    'resume' => array(
      'name' => t('Резюме'),
      'base' => 'node_content',
      'description' => t('(a)	ФИО
(b)	Фото
(c)	Дата рождения
(d)	Доп.информация (Наличие компьютера, права)
(e)	Образование (несколько)
(f)	Направление подготовки (не обязательно)
(g)	Навыки
(h)	Личные качества
(i)	Контактные данные
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
