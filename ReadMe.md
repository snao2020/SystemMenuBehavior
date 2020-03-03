# SystemMenuBehavior

## Description
Using Interactivity behavior, change system-menu navigation to wpf style.

## Features
* When mouse cursor is on a disabled item in system-menu, no hover effect is appeared.
* Arrow key navigation skippes disabled items in system-menu.
* When popup-menu is opened, Single click to x-button in title-bar will close window.
* System menu opened by right-button click in title-bar, default-item is SC_MAXIMIZE or SC_RESTORE.

## Usage
````
<Window
...
    xmlns:i="http://schemas.microsoft.com/expression/2010/interactivity"
    >  
    <i:Interaction.Behaviors>
        \<local:SysMenuBehavior/>
    </i:Interaction.Behaviors>
````

## Files
SystemMenuBehavior.cs  
MainWindow.xaml // demo
