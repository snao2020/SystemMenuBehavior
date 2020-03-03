<Window x:Class="HookSysMenu.MainWindow"
        xmlns="http://schemas.microsoft.com/winfx/2006/xaml/presentation"
        xmlns:x="http://schemas.microsoft.com/winfx/2006/xaml"
        xmlns:d="http://schemas.microsoft.com/expression/blend/2008"
        xmlns:mc="http://schemas.openxmlformats.org/markup-compatibility/2006"
        xmlns:i="http://schemas.microsoft.com/expression/2010/interactivity"
        xmlns:local="clr-namespace:HookSysMenu"
        mc:Ignorable="d"
        Title="MainWindow" Height="350" Width="525">
    
    <i:Interaction.Behaviors>
        <local:SysMenuBehavior/>
    </i:Interaction.Behaviors>
    
    <DockPanel>
        <Menu DockPanel.Dock="Top">
            <MenuItem Header="_File">
                <MenuItem Header="_Open"/>
            </MenuItem>
            <MenuItem Header="_Help">
                <MenuItem Header="_About..."/>
            </MenuItem>
        </Menu>
        <Button Content="Button">
            <Button.ContextMenu>
                <ContextMenu>
                    <MenuItem Header="Header0"/>
                    <MenuItem Header="Header1"/>
                </ContextMenu>
            </Button.ContextMenu>
        </Button>
    </DockPanel>
</Window>
