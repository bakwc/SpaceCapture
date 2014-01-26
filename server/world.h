#pragma once

#include <QObject>
#include <QVector>
#include <QHash>
#include <QPointF>

#include "space.pb.h"

struct TPlanet {
    size_t Id;
    QPointF Position;
    float Radius;
    float Energy;
    int PlayerId;
};

struct TPlayer {
    QString Name;
    size_t Id;
};

struct TShip {
    QPointF Position;
    QPointF Speed;
    float Energy;
    size_t PlayerId;
};

const float PLAYER_PLANET_RADIUS = 30.0f;
const float MINIMUM_PLAYER_PLANET_DISTANCE = 100.0f;
const float MINIMUM_PLANET_DISTANCE = 3.0f;
const float PLAYER_PLANET_ENERGY = 100.0f;
const size_t PLANETS_MAX_NUMBER = 20;
const size_t PLANETS_MIN_NUMBER = 10;
const float PLANET_MAX_RADIUS = 60.0f;
const float PLANET_MIN_RADIUS = 10.0f;
const float PLANET_MAX_ENERGY = 50.0f;
const float PLANET_MIN_ENERGY = 0.0f;

class TWorld : public QObject
{
    Q_OBJECT
public:
    TWorld(QObject *parent = 0);
    void RestartRound();
    bool IsPossiblePlanetPosition(const QPointF& position, float radius, float minDistance);
    void GeneratePlayerPlanets();
    void GenerateRandomPlanets();
    void UpdatePlanetEnergy();
    void ProcessShips();
    void SendWorld();
    void timerEvent(QTimerEvent*);
    void SpawnShips(TPlanet& from, TPlanet& to, float energyPercents, size_t playerId);
    bool ProcessCollision(TShip& ship);
    void CheckRoundEnd();
signals:
    void WorldUpdated(Space::TWorld world);
public slots:
    void OnNewPlayer(size_t playerId);
    void OnControl(size_t playerId, Space::TControl control);
private:
    QHash<size_t, TPlanet> Planets;
    QHash<size_t, TPlayer> Players;
    QVector<TShip> Ships;
    quint64 Time;
};
