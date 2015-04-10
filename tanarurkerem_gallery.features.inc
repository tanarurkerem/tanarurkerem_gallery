<?php
/**
 * @file
 * tanarurkerem_gallery.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tanarurkerem_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
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
