<?php
/**
 * @file
 * agustinianosuba.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function agustinianosuba_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'front_page';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page__panel_context_9bc5b95c-03e1-4f94-8b44-c5e328119a07';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f7c1fb24-1a2c-4702-8798-9850c0f4b2aa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-554e6061-e169-489f-9456-eead48c3acd6';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'home';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'noticias',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '554e6061-e169-489f-9456-eead48c3acd6';
    $display->content['new-554e6061-e169-489f-9456-eead48c3acd6'] = $pane;
    $display->panels['middle'][0] = 'new-554e6061-e169-489f-9456-eead48c3acd6';
    $pane = new stdClass();
    $pane->pid = 'new-9ac8a39b-e688-4c52-93bf-65f1ebbe0ed1';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'home';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9ac8a39b-e688-4c52-93bf-65f1ebbe0ed1';
    $display->content['new-9ac8a39b-e688-4c52-93bf-65f1ebbe0ed1'] = $pane;
    $display->panels['middle'][1] = 'new-9ac8a39b-e688-4c52-93bf-65f1ebbe0ed1';
    $pane = new stdClass();
    $pane->pid = 'new-07e81219-c03b-4438-b592-2693d1a7af99';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'home';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '07e81219-c03b-4438-b592-2693d1a7af99';
    $display->content['new-07e81219-c03b-4438-b592-2693d1a7af99'] = $pane;
    $display->panels['right'][0] = 'new-07e81219-c03b-4438-b592-2693d1a7af99';
    $pane = new stdClass();
    $pane->pid = 'new-e7772a2e-1215-4a8e-ba3b-33fb98ddc19b';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'home';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7772a2e-1215-4a8e-ba3b-33fb98ddc19b';
    $display->content['new-e7772a2e-1215-4a8e-ba3b-33fb98ddc19b'] = $pane;
    $display->panels['top'][0] = 'new-e7772a2e-1215-4a8e-ba3b-33fb98ddc19b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
