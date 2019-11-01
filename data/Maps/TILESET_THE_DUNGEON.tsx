<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.2" tiledversion="1.2.4" name="TILESET_THE_DUNGEON" tilewidth="64" tileheight="64" tilecount="90" columns="10">
 <properties>
  <property name="test" value="test"/>
 </properties>
 <image source="../Textures/Tilesets/tileset_64x64.png" width="640" height="576"/>
 <tile id="0" type="SALUT">
  <properties>
   <property name="test" value="test"/>
  </properties>
  <objectgroup draworder="index">
   <object id="1" name="g" type="g" x="31.8637" y="0.0481419" width="37" height="37" rotation="-14.9063">
    <properties>
     <property name="t" value="f"/>
    </properties>
    <ellipse/>
   </object>
   <object id="2" x="10.6667" y="27.6667">
    <polygon points="0,0 23.6667,13.6667 0.666667,20.6667"/>
   </object>
   <object id="3" x="7.66667" y="9.33333">
    <polyline points="0,0 13.3333,-4.66667 14.3333,9.66667"/>
   </object>
  </objectgroup>
 </tile>
 <tile id="49">
  <objectgroup draworder="index">
   <object id="1" x="0" y="0" width="64" height="64">
    <properties>
     <property name="isSensor" type="bool" value="true"/>
    </properties>
   </object>
  </objectgroup>
 </tile>
 <tile id="75">
  <objectgroup draworder="index">
   <object id="1" x="0" y="0" width="64" height="64">
    <properties>
     <property name="isSensor" type="bool" value="true"/>
    </properties>
   </object>
  </objectgroup>
 </tile>
</tileset>
