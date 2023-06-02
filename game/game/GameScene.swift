

import SpriteKit
import GameplayKit

class GameScene: SKScene, SKPhysicsContactDelegate {
    
    var background: SKEmitterNode!
    var player: SKSpriteNode!
    
    override func didMove(to view: SKView) {
        background = SKEmitterNode(fileNamed: "Action")
        background.position = CGPoint(x: 0, y: 1472)
        background.advanceSimulationTime(5)
        self.addChild(background)
        
        background.zPosition = -1
        
        player = SKSpriteNode(imageNamed: "player")
        player.position = CGPoint(x: 0, y: 300)
        self.addChild(player)
        
        self.physicsWorld.gravity = CGVector(dx: 0, dy: 0)
        self.physicsWorld.contactDelegate = self
    }
    
//    override func update(_ currentTime: TimeInterval) {
//        <#code#>
//    }
    
}
