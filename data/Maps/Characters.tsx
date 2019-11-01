<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.2" tiledversion="1.2.4" name="Characters" tilewidth="163" tileheight="107" tilecount="2" columns="0">
 <grid orientation="orthogonal" width="1" height="1"/>
 <tile id="5" type="HERO1">
  <properties>
   <property name="isFixedRotation" type="bool" value="true"/>
   <property name="life" type="float" value="100"/>
   <property name="maxLife" type="float" value="100"/>
   <property name="maxSpeed" type="float" value="600"/>
   <property name="physic" type="int" value="2"/>
  </properties>
  <image width="163" height="107" source="../Textures/Characters/Heroes/Hero_1/iconHero.png"/>
  <objectgroup draworder="index">
   <object id="1" type="PHYSICAL_HITBOX" x="63" y="84" width="38" height="11">
    <properties>
     <property name="density" type="float" value="1"/>
     <property name="isSensor" type="bool" value="false"/>
    </properties>
   </object>
   <object id="3" type="ENTITY_HITBOX" x="66.6667" y="23.1515" width="30.9697" height="71.0909">
    <properties>
     <property name="isSensor" type="bool" value="true"/>
    </properties>
   </object>
   <object id="4" x="16.1948" y="17.1235" rotation="-39.7516">
    <polyline points="0,0 13.25,-2 5.5,14"/>
   </object>
   <object id="5" x="48.25" y="6.25">
    <polygon points="0,0 9.3409,1.99695 14.0416,3.00189 15.1667,12.75 -2,22.3333"/>
   </object>
   <object id="6" x="128.75" y="14.5">
    <point/>
   </object>
   <object id="7" name="sa" type="tu" x="15.4728" y="52.5805" width="25" height="32.25" rotation="-27.4589">
    <properties>
     <property name="tzeiusdhsfhdlsqs" value="ll"/>
    </properties>
    <ellipse/>
   </object>
  </objectgroup>
 </tile>
 <tile id="6" type="HERO2">
  <properties>
   <property name="isFixedRotation" type="bool" value="true"/>
   <property name="life" type="float" value="100"/>
   <property name="maxLife" type="float" value="100"/>
   <property name="maxSpeed" type="float" value="600"/>
   <property name="physic" type="int" value="2"/>
  </properties>
  <image width="117" height="78" source="../Textures/Characters/Heroes/Hero_2/tiledHero2.png"/>
  <objectgroup draworder="index">
   <object id="1" type="PHYSICAL_HITBOX" x="47.8636" y="64.1818" width="40.2045" height="11.5455">
    <properties>
     <property name="density" type="float" value="1"/>
     <property name="isSensor" type="bool" value="false"/>
    </properties>
   </object>
   <object id="2" type="ENTITY_HITBOX" x="48.7652" y="11.9545" width="37.9697" height="63.5909">
    <properties>
     <property name="isSensor" type="bool" value="true"/>
    </properties>
   </object>
  </objectgroup>
 </tile>
</tileset>
