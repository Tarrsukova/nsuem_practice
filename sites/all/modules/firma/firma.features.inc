<?php
/**
 * @file
 * firma.features.inc
 */

/**
 * Implements hook_node_info().
 */
function firma_node_info() {
  $items = array(
    'firm' => array(
      'name' => t('Фирма'),
      'base' => 'node_content',
      'description' => t('тип материала с полями: 
	Название, 
	логотип/фото профиля(картинка)
	Информация о фирме
        Адрес(расположение - карта)
	Номер и дата договора(текстовое поле) 
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
