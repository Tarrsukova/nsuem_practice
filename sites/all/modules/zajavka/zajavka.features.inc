<?php
/**
 * @file
 * zajavka.features.inc
 */

/**
 * Implements hook_node_info().
 */
function zajavka_node_info() {
  $items = array(
    'request' => array(
      'name' => t('Заявка'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
